/*
 Rifqia Hani Milatunnisa
 L0124074
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

// kode warna ANSI
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

// Variabel global
char board[SIZE][SIZE];
int movesX[3] = {-1, -1, -1}; // Menyimpan posisi langkah X
int movesO[3] = {-1, -1, -1}; // Menyimpan posisi langkah O
int lastRemoved = -1; // Menyimpan posisi langkah yang akan dihapus
char playerX[50], playerO[50]; // Nama pemain

// Fungsi untuk membersihkan layar
void clearScreen() {
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}

// Fungsi untuk mencetak banner/awalan permainan
void start() {
    printf("========         SELAMAT DATANG         ========\n");
    printf("======== DI PERMAINAN TIC TAC TOE 3-MAX ========\n");
    printf("========         SELAMAT BERMAIN        ========\n\n");
}

// Fungsi untuk mencetak aturan permainan yang ada dalam file txt
void printRules() {
    FILE *file_ptr;
    char ch;

    file_ptr = fopen("aturan.txt", "r");
    if (file_ptr == NULL) {
        printf("File aturan tidak bisa dibuka.\n");
        return;
    }

    printf("Aturan Permainan:\n");
    while ((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(file_ptr);
    printf("\n");
}

// Fungsi untuk menginisialisasi nilai awal papan permainan
void initBoard() {
    // Looping untuk menginilisasi nilai awal pada papan
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

// Fungsi untuk mencetak papan permainan
void displayBoard() {
    int oldestMoveX = movesX[0];
    int oldestMoveO = movesO[0];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int position = i * SIZE + j;
            // Jika yang dicetak simbol X atau O yang akan hilang maka warnanya akan merah
            if (position == oldestMoveX && board[i][j] == 'X') {
                printf(" %sX%s ", RED, RESET);
            } 
            else if (position == oldestMoveO && board[i][j] == 'O') {
                printf(" %sO%s ", RED, RESET);
            }
            // Jika yang dicetak simbol X maka warnanya kuning
            else if (board[i][j] == 'X') {
                printf(" %sX%s ", YELLOW, RESET);
            } 
            // Jika yang dicetak simbol O maka warnanya biru
            else if (board[i][j] == 'O') {
                printf(" %sO%s ", BLUE, RESET);
            }
            // Jika kotak kosong maka akan berisi spasi 
            else {
                printf("   ");
            }

            if (j < SIZE - 1) 
            printf("|");
        }
        printf("\n");

        if (i < SIZE - 1) 
        printf("---+---+---\n");
    }
}

// Fungsi untuk mengecek jika salah satu pemain sudah menang
int checkWin(char player) {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return 1;
    }
    
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return 1;
    
    return 0;
}

// Fungsi untuk memperbarui langkah yang tersimpan menggunakan pointer
void updateMoves(int *moves, int row, int col) {
    if (moves[2] != -1) {
        int oldRow = moves[0] / SIZE;
        int oldCol = moves[0] % SIZE;
        board[oldRow][oldCol] = ' ';
    } 
    else {
        lastRemoved = -1; // Tidak ada langkah yang dihapus
    }

    for (int i = 0; i < 2; i++) {
        moves[i] = moves[i + 1];
    }
    moves[2] = row * SIZE + col;
}

/* Fungsi untuk mengambil input langkah yang dimasukkan pemain
   kemudian disimpan dengan memanggil fungsi updateMoves
*/
int makeMove(char player, char *playerName) {
    int row, col;
    printf("%s (%c), masukkan baris dan kolom dipisahkan oleh spasi (1, 2, atau 3)", playerName, player);
    printf("\n>> ");
    scanf("%d %d", &row, &col);

    // Karena pemain diminta input 1-3 maka row dan col harus dikurangi 1 agar sesuai dengan array
    row--; col--;

    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
        printf("Langkah tidak valid, coba lagi.\n");
        return 0;
    }

    board[row][col] = player;
    if (player == 'X') {
        updateMoves(movesX, row, col);
    } 
    else {
        updateMoves(movesO, row, col);
    }
    return 1;
}

// Fungsi utama permainan, mulai dari input pemain sampai salah satu pemain menang
void playGame() {
    char currentPlayer, *currentPlayerName;

    printf("\nMasukkan nama untuk pemain X: ");
    scanf(" %[^\n]", playerX);
    printf("Masukkan nama untuk pemain O: ");
    scanf(" %[^\n]", playerO);
    printf("\n");

    // Mengacak siapa yang menjadi pemain pertama
    if (rand() % 2 == 0) {
        currentPlayer = 'X';
        currentPlayerName = playerX;
    } 
    else {
        currentPlayer = 'O';
        currentPlayerName = playerO;
    }

    initBoard();

    // Permainan akan terus dijalankan sampai salah satu pemain menang
    // Looping permainan sampai salah satu pemain menang
    while (1) {
        printf("\n");
        displayBoard();
        if (makeMove(currentPlayer, currentPlayerName)) {
            if (checkWin(currentPlayer)) {
                printf("\n");
                displayBoard();
                printf("\n%s menang!\n", currentPlayerName);
                break;
            }
            // Pemain menjalankan permainan secara bergantian
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            currentPlayerName = (currentPlayer == 'X') ? playerX : playerO;
        }
    }
}

// Fungsi untuk mengosongkan langkah pemain
void freeBoard() {
    for (int i=0; i<SIZE; i++) {
            movesX[i] = -1;
            movesO[i] = -1;
    }
}

// Fungsi rekursi jika pemain ingin bermain kembali
void playAgain() {
    char response;
    printf("\n\n\nApakah Anda ingin bermain lagi? (y/n): ");
    printf("\n>> ");
    scanf(" %c", &response);
    if (response == 'y' || response == 'Y') {
        freeBoard();
        clearScreen();
        playGame();
        playAgain();
    } 
    else if (response == 'n' || response == 'N') {
        printf("\n\nTerima kasih telah bermain! Jangan lupa datang lagi!\n\n");
    }
    // Jika input salah, fungsi playAgain akan dipanggil di dalam fungsinya sendiri 
    else {
        printf("Input salah, masukkan ulang pilihan! \n");
        playAgain();
    }
}

// Fungsi untuk menampilkan menu pilihan kepada pemain
void mainMenu() {
    start();
    int menuChoice;
    // Looping sampai input menuChoice = 2
    do {
        printf("Apa yang ingin dilakukan? (1/2)?\n");
        printf("1. Lihat aturan permainan\n");
        printf("2. Mulai permainan baru\n");
        printf(">> ");
        scanf(" %d", &menuChoice);

        // Jika pemain memilih 1 maka peraturan akan tercetak di layar
        if (menuChoice == 1) {
            clearScreen();
            printRules();
            printf("\nKetik enter untuk kembali ke halaman utama\n\n>> ");
            getchar();
            getchar();
            clearScreen();
            mainMenu();
        }
        // Jika pemain memilih 2 maka permainan akan dimulai
        else if (menuChoice == 2) {
            playGame();
            playAgain();
        } 
        else {
            printf("\n");
            printf("Input salah, coba lagi!\n");
        }
    } 
    while (menuChoice != 2);
}

// Fungsi utama program
int main() {
    srand(time(NULL));
    clearScreen();
    mainMenu();
    return 0;
}
