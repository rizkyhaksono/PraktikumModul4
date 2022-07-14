/* 
**
@author: Rizky Haksono
**
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    backTo:
    printf("\t  Tugas Modul 4 [Kegiatan 1]\n");
    printf("===========================================\n");
    printf("|| Nama \t: Muhammad Rizky Haksono ||\n");
    printf("|| NIM  \t: 325 \t\t\t ||\n");
    printf("|| Kelas \t: G \t\t\t ||");
    printf("\n===========================================\n\n");

    printf("\t      Tabel Nilai Ujian Pemrograman Dasar \t\t    \n");
    printf("==============================================================\n");
    printf("|| Nama \t   Ujian 1  \t   Ujian 2  \t    Ujian 3 ||\n");

    int boruto[3] = {85, 90, 86};
    int sarada[3] = {84, 90, 89};

    printf("|| Boruto");
    for (int i = 0; i < 3; i++){
        printf("\t      %d", boruto[i]);
    }
    printf("    ||");


    printf("\n|| Sarada");
    for (int i = 0; i < 3; i++){
        printf("\t      %d", sarada[i]);
    }
    printf("    ||");

    printf("\n==============================================================\n\n");

    printf("\t   Tabel Perbandingan Nilai Ujian Boruto & Sarada \t\n");
    printf("===================================================================\n");
    printf("|| Nama \t\tUjian 1 \t Ujian 2 \t Ujian 3 ||\n");
    printf("|| Boruto & Sarada");

    // Untuk mengecek perbandingan nilai boruto dan sarada apakah 1 atau 0
    for (int i = 0; i < 3; i++) {
        if (boruto[i] > sarada[i]) {
            printf("\t   1    ");
        }else{
            printf("\t    0\t");
        }
    }

    printf(" ||");
    printf("\n===================================================================\n\n");

    printf("\t     Info Spesifikasi Boruto & Sarada\n");
    printf("=========================================================\n");
    printf("|| *1 Jika Nilai Boruto Lebih Besar Daripada Sarada    ||\n");
    printf("|| *2 Jika Nilai Sarada Kurang Dari Sama Dengan Boruto ||\n");
    printf("=========================================================\n");

    char jawab;
    back:
    printf("\nIngin Keluar Dari Program? [y/n] : ");
    scanf("%s", &jawab);

    switch(tolower(jawab)) {
    case 'n':
        system("cls");
        goto backTo;
        break;
    case 'y':
        system("cls");
        printf("\n=======================================================\n");
        printf("|| Terima Kasih Telah Menggunakan Progam Kegiatan 1! ||\n");
        printf("=======================================================\n");
        break;
    default:
        printf("\n=======================\n");
        printf("|| Anda Salah Ketik! ||\n");
        printf("=======================\n");
        goto back;
        break;
    }

    return 0;
}
