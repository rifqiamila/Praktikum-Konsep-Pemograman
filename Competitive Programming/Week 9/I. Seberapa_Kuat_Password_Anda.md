Pada suatu hari, Anda mendaftarkan diri pada suatu website online judge, yaitu situs yang menerima repositori soal-soal pemrograman dan penilaian kode sumber secara otomatis seperti TOKI Learning Center dan TLX, sebut saja Online Judge Mawar.

Online Judge Mawar adalah online judge unik. Alih-alih disuruh membuat akun dan password seperti registrasi-registrasi biasanya, Online Judge Mawar menyuruh Anda membuat program untuk mengkategorikan password apakah password tersebut kuat, agak kuat, atau lemah.

Sebuah password dinyatakan kuat jika terdiri dari 8 karakter atau lebih, mengandung karakter abjad huruf besar, huruf kecil, angka, dan karakter khusus (bukan angka dan bukan huruf). Password yang tak memenuhi kriteria tersebut, digolongkan agak kuat jika mengandung lebih dari 12 karakter abjad.  Jika bukan kuat atau agak kuat, maka password tergolong lemah.

Anda sangat ingin mendaftar pada Online Judge Mawar. Maka buatlah program yang dapat mengkategorikan password seperti spesifikasi di atas.

## Format Masukan
Sebuah baris tanpa spasi berisi password maksimal 20 karakter yang perlu dikategorikan.

## Format Keluaran
Sebuah baris berisi Kuat apabila password adalah password yang kuat, AgakKuat apabila password agak kuat, atau Lemah apabila password tergolong lemah.

## Sample
Input (1)
```
123450000000001
```
Output (1)
```
Lemah
```

Input (2)
```
Jelek_1222
```
Output (2)
```
Kuat
```

Input (3)
```
wkwkwkwkwkwkw
```
Output (3)
```
AgakKuat
```

## Batasan
1 ≤ (panjang password) ≤ 20

Tiap karakter pada password hanya terdiri dari karakter berikut : 'a'-'z', 'A'-'Z', '0'-'9', '_', '!', '?'

## Sumber 
https://vjudge.net/contest/670252#problem/I
