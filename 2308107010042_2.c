#include <stdio.h>
#include <stdlib.h> // Menggunakan standard-library function atoi

int main() {
    char tahun[5]; // Menyimpan tahun sebagai string (termasuk karakter nol akhir)
    int tahunKabisat = 0; // Inisialisasi variabel untuk menentukan apakah tahun kabisat atau tidak

    // Meminta pengguna untuk memasukkan tahun
    while (1) {
        printf("Masukkan tahun (4 angka): ");
        scanf("%s", tahun);

        // Memeriksa apakah input hanya terdiri dari 4 angka dan bukan berupa huruf
        if (tahun[0] < '0' || tahun[0] > '9' || tahun[1] < '0' || tahun[1] > '9' ||
            tahun[2] < '0' || tahun[2] > '9' || tahun[3] < '0' || tahun[3] > '9' || tahun[4] != '\0') {
            printf("Input tidak valid. Harap masukkan 4 angka.\n");
            continue;
        }

        int bilangan = atoi(tahun); // Mengonversi string tahun menjadi integer

        // Mengecek apakah input merupakan tahun kabisat
        if ((bilangan % 4 == 0 && bilangan % 100 != 0) || bilangan % 400 == 0) {
            tahunKabisat = 1;
        }

        break;
    }

    if (tahunKabisat) {
        printf("Tahun %s adalah tahun kabisat.\n", tahun);
    } else {
        printf("Tahun %s bukan tahun kabisat.\n", tahun);
    }

    return 0;
}
