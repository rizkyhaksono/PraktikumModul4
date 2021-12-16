#include <stdio.h>
#include <stdlib.h>

int main(void) {

    confirm:
    printf("[*] Tugas Modul 4 [Kegiatan 2]\n");
    printf("==================================================\n");
    printf("||\t Nama \t: Muhammad Rizky Haksono \t||\n");
    printf("||\t NIM  \t: 325 \t\t\t \t||\n");
    printf("||\t Kelas \t: G \t\t\t \t||");
    printf("\n==================================================\n\n");

    printf("[*] Menu Ordo Matrix\n");
    printf("==================================================\n");
    printf("||\t No \tNama       \t Ukuran  \t||\n");
    printf("||\t 1. \tOrdo Matrix \t 2x2 \t \t||\n");
    printf("||\t 2. \tOrdo Matrix \t 3x3 \t \t||\n");
    printf("==================================================\n");

    int menu;
    printf("\n[+] Pilih Ordo Matrix : ");
    scanf("%d", &menu);
    printf("\n");

    switch (menu) {
    case 1:
        matrix2();
        break;
    case 2:
        matrix3();
        break;
    default:
        goto backToJawab;
        break;
    }

    char jawab;

    back:
    printf("\n\nIngin Mengulangi Lagi? [y/n] : ");
    backToJawab:
    scanf("%s", &jawab);
    printf("\n");

    switch(tolower(jawab)) {
    case 'y':
        system("cls");
        goto confirm;
        break;
    case 'n':
        system("cls");
        printf("\n========================================================\n");
        printf("|| Terima Kasih Telah Menggunakan Perhitungan Matrix! ||\n");
        printf("========================================================\n");
        break;
    default:
        printf("=======================\n");
        printf("|| Anda Salah Ketik! ||\n");
        printf("=======================");
        goto back;
        break;
    }

    return 0;
}

void matrix2 (void) {
    int angka[2][2];
    int nomor = 1;
    int i, j;

    for (i = 0; i < 2; i++) { // i untuk [0] [0] & [1] [1] baris / kiri
        for (j = 0; j < 2; j++) { // j untuk [0] [1] & [0] [1] kolom / kanan
            printf("[%d] Masukan Input Matrix [%d][%d] : ", nomor++ , i, j);
            scanf("%d", &angka[i][j]);
        }
    }

    printf("\n[*] Matrix : \n\n");

    for (int i = 0; i < 2; i++) { // baris
        for (int j = 0; j < 2; j++) { // kolom
            printf("%d\t", angka[i][j]); // mengurutkan baris dan kolom
        }
        printf("\n");
    }

    // perbadingan dari angka[2][2]
    int terkecil = angka[0][0];
    int terbesar = angka[0][0];

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            if (terkecil > angka[i][j]) {
                terkecil = angka[i][j];
            }else if (terbesar < angka[i][j]) {
                terbesar = angka[i][j];
            }
        }
    }

    printf("\n==========================================");
    printf("\n||\t  Bilangan Terkecil : %d  \t||\n", terkecil);
    printf("||\t  Bilangan Terbesar : %d  \t||\n", terbesar);
    printf("==========================================\n");
}

void matrix3 (void) {
    int angka[3][3];
    int nomor = 1;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d] Masukan Input Matrix [%d][%d] : ", nomor++ , i, j);
            scanf("%d", &angka[i][j]);
        }
    }

    printf("\n[*] Matrix : \n\n");

    for (int i = 0; i < 3; i++) { // baris
        for (int j = 0; j < 3; j++) { // kolom
            printf("%d\t", angka[i][j]); // mengurutkan baris dan kolom
        }
        printf("\n");
    }

    // perbadingan dari angka[3][3]
    int terkecil = angka[0][0];
    int terbesar = angka[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if (terkecil > angka[i][j]) {
                terkecil = angka[i][j];
            }else if (terbesar < angka[i][j]) {
                terbesar = angka[i][j];
            }
        }
    }

    printf("\n==========================================");
    printf("\n||\t  Bilangan Terkecil : %d  \t||\n", terkecil);
    printf("||\t  Bilangan Terbesar : %d  \t||\n", terbesar);
    printf("==========================================\n");
}
