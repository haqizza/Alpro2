#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
typedef struct{
    char id[6];
    char nama[40];
    char program[5];
}pesertas;
typedef struct{
    char id[5];
    char namaProgram[40];
    char pengajar[40];
}programs;

pesertas peserta[50];
programs program[50];
int indeks;
int panjangKata;
char cKata[50];
int xit;

void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char* getCKata();
int getPanjangKata();
int EOPKata(char pita[]);

void readPeserta(int *nPeserta);
void readProgram(int *nProgram);

int exitT();
void insertQuery(char *pita);