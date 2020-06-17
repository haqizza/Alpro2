#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
typedef struct{
    int x;
    int y;
}koordinat;

koordinat cepot;
koordinat hasil[100];
int stepCounter;

void hitung(char par,int langkah,int count);
void print(int cases);