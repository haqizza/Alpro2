#include <stdio.h>
#include <stdlib.h>
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
typedef struct{
    int jam;
    int menit;
    int detik;
}format;

format waktu[100];

void scan(int n,int *time);
void hitung(int n,int time[]);
void moveline(int i,int j);
void urutkan(int n);
void print(int n);