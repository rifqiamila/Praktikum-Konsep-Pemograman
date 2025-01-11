Suatu hari, Pak Dengklek menemukan sebuah buku cerita berjudul "Kisah Katak Dalam Sumur" ketika sedang beres-beres perpustakaannya. Pak Dengklek tertarik lalu membacanya....

Alkisah, terdapat seekor katak yang unik. Katak tersebut dapat melompat-lompat. Dalam sekali lompatan, sang katak dapat berpindah sejauh J1 meter, J2 meter, ..., atau JN meter.

Suatu ketika, sang katak terjatuh ke dalam sumur sedalam H meter. Sang katak ingin segera keluar dari sumur tersebut. Ia lalu melompat ke atas sejauh-jauhnya; yakni, menggunakan lompatan sedemikian sehingga ia berpindah ke atas sejauh mungkin. Kemudian, ia merasa sangat lelah. Ia lalu melompat dengan menggunakan lompatan sedekat-dekatnya sedemikian sehingga ia bisa keluar dari dari sumur tersebut (yakni, total lompatannya ≥ H meter).

Sebenarnya, masih terdapat kelanjutan dari cerita tersebut. Namun, pada titik ini, Pak Dengklek penasaran, sebenarnya berapa total lompatan yang telah dilakukan sang katak?

## Format Masukan
Baris pertama berisi dua buah bilangan bulat N dan H. Baris berikutnya berisi N buah bilangan bulat J1, J2, ..., JN.

## Format Keluaran
Sebuah baris berisi total lompatan sang Katak.

## Sample
Input (1)
```
5 15
3 8 10 1 7
```
Output (1)
```
17
```

Input (2)
```
2 8
4 2
```
Output (2)
```
8
```

## Penjelasan
Pada contoh pertama, sang katak melompat sejauh-jauhnya yakni 10 meter. Kemudian, karena tersisa tinggal 5 meter lagi, ia melompat sependek-pendeknya yang mungkin, yakni 7 meter. Sehingga, total lompatannya adalah 17 meter.

Pada contoh kedua, sang katak melompat sejauh 4 meter pada kedua lompatan.

## Batasan
1 ≤ N ≤ 100.000

1 ≤ H ≤ 2.000.000

1 ≤ Ji ≤ 1.000.000

Dijamin J1, J2, ..., JN berbeda-beda semua.

Dijamin masukan benar, yakni sang katak dapat keluar dari sumur dengan tepat dua kali lompatan seperti yang dijelaskan oleh buku cerita tersebut.

## Sumber
https://vjudge.net/contest/677744#problem/D
