#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP2 (MaBuk219) Matriks Bungkusan Makanan dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    char nama[50];
    char m1[50];
    char m2[50];
}list;
void scan(int n,int m,list (*arr)[m]);
void printTest(int n,int m,list (*arr)[m]);
void print(int n,int m,list (*arr)[m]);
void scanSwitch(int n,int m,list (*arr)[m]);