/* File: halo.c */
/* Penulis: Rifqy Fauzan, email: rifqyfauzann1@gmail.com */
/* Deskripsi : */
/* Program ini berisi contoh sederhana untuk mendefinisikan */
/* variabel bertype karakter */
#include<stdio.h>
int main() {
    char c = 65; /* Inisialisasi nilai karakter dengan 65, kode huruf 'A' */
    char c1;

    printf("Karakter = %c\n", c);
    c1 = 'Z';
    printf("Karakter = %c\n", c1);

    printf("Karakter sebagai kode ASCII = %d\n", c);
    printf("Karakter sebagai huruf = %c\n", c);
    printf("Karakter sebagai kode ASCII = %d\n", c1);
    printf("Karakter sebagai huruf = %c\n", c1);

    return 0;
}