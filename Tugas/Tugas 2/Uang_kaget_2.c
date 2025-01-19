#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int price;
} Item;

typedef struct {
    char type[30];
    Item items[6];
    int itemCount;
} Category;

int main() {
    system("cls");
    
    // Define available money amounts
    int moneyOptions[6] = {3000000, 10000000, 5000000, 4000000, 9000000};
    int selectedOption, availableMoney;
    char userName[49];
    
    // Define categories and items
    Category categories[5] = {
        {"Bahan pokok", {{"Beras 10 kg", 145000}, {"Gula 1 kg", 18600}, {"Minyak 1 liter", 25000}, {"Telur 1 kg", 27500}, {"Daging ayam 1 kg", 39000}, {"Garam 100 gram", 2500}}, 6},
        {"Peralatan rumah tangga", {{"Kasur", 925000}, {"Meja", 519000}, {"Kompor", 301000}, {"Ember", 27000}, {"Payung", 25000}}, 5},
        {"Elektronik", {{"Televisi", 1859000}, {"Mesin cuci", 1590000}, {"Lemari es", 1650000}, {"Rice cooker", 268000}, {"Smartphone", 2500000}}, 5},
        {"Emas", {{"Emas", 1407000}}, 1},
        {"Makanan", {{"Nasi goreng", 15000}, {"Sate ayam", 35000}, {"Martabak", 25000}, {"Bakso", 15000}, {"Mie goreng", 11000}}, 5}
    };

    int selectedCategory, selectedItem, quantity;
    char purchasedItems[30][30];
    int purchasedPrices[30] = {0};
    int purchasedQuantities[30] = {0};
    int totalSpent = 0, itemCount = 0;

    printf("================ Uang Kaget ================\n");
    printf("============================================\n");
    printf("\nMasukkan nama Anda\t: ");
    scanf(" %[^\n]", userName);
    
    printf("Pilih angka 1-5\t: "); // Input money
    scanf("%d", &selectedOption);

    if (selectedOption < 1 || selectedOption > 5) {
        printf("\nMaaf Anda gagal mendapatkan hadiah uang kaget!!");
        return 1;
    }

    availableMoney = moneyOptions[selectedOption - 1]; // Money the user received
    printf("\n%s, Selamat Anda mendapatkan uang kaget sebesar %d", userName, availableMoney);
    printf("\n");
    
    // Outer loop for selecting categories
    while (1) {
        printf("\nSilahkan masukkan barang yang Anda ingin beli, pastikan sesuai dengan prioritas Anda\n");
        for (int i = 0; i < 5; i++) {
            printf("%d. %s\n", i + 1, categories[i].type);
        }
        
        printf("Pilih jenis barang yang ingin dibeli (1-5) atau 0 untuk keluar\t: ");
        scanf("%d", &selectedCategory);
        
        if (selectedCategory < 1 || selectedCategory > 5) {
            if (selectedCategory == 0) {
                break; // Exit option
            }
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
            continue;
        }
        
        Category currentCategory = categories[selectedCategory - 1];
        
        // Inner loop for selecting items within a category
        while (1) {
            printf("\nBarang yang tersedia di kategori %s:\n", currentCategory.type);
            for (int j = 0; j < currentCategory.itemCount; j++) {
                printf("%16s - Harga: %d....(%d)", currentCategory.items[j].name, currentCategory.items[j].price, j + 1);
                printf("\n");
            }
            printf("\nPilih barang yang ingin dibeli (1-%d)\t: ", currentCategory.itemCount);
            scanf("%d", &selectedItem);

            if (selectedItem < 1 || selectedItem > currentCategory.itemCount) {
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                continue;
            }
            
            printf("Jumlah yang ingin dibeli\t: ");
            scanf("%d", &quantity);
            
            strcpy(purchasedItems[itemCount], currentCategory.items[selectedItem - 1].name);
            purchasedPrices[itemCount] = currentCategory.items[selectedItem - 1].price;
            purchasedQuantities[itemCount] = quantity;
            itemCount++;

            // Check total spent after each purchase
            totalSpent += purchasedPrices[itemCount - 1] * quantity;
            if (totalSpent > availableMoney) {
                totalSpent -= purchasedPrices[itemCount - 1] * quantity; // Undo last addition
                printf("\nMaaf, uang Anda tidak cukup untuk membeli %s.\n", purchasedItems[itemCount - 1]);
                itemCount--; // Remove last item from the count
            } 
            else {
                // Display remaining money after a successful purchase
                printf("\nPembelian %s berhasil! Sisa uang Anda: %d", purchasedItems[itemCount - 1], availableMoney - totalSpent);
                printf("\n");
            }

            // Automatically return to category selection after each valid purchase
            break; // This breaks the inner item loop to return to the category selection
        }
    }

    printf("\n\nDaftar Barang yang Berhasil Dibeli\n");
    printf("| No |      Barang      | Harga Satuan | Jumlah |   Harga   |\n");
    printf("|----|------------------|--------------|--------|-----------|\n");

    for (int i = 0; i < itemCount; i++) {
        int totalPrice = purchasedPrices[i] * purchasedQuantities[i];
        printf("| %2d | %16s | %12d | %6d | %9d |\n", 
               i + 1, 
               purchasedItems[i], 
               purchasedPrices[i],
               purchasedQuantities[i],
               totalPrice);
    }
    
    printf("| Total= %50d |\n", totalSpent);
    printf("| Sisa Uang= %46d |\n", availableMoney - totalSpent);
    
    return 0;
}
