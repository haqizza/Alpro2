#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi Kuis 1 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{//Deklarasi pecahan
    int pem;
    int pen;
}pecahan;
void scan(int n,int m,pecahan (*arr)[m]);
void banding(int n,int m,pecahan (*ar1)[m],pecahan (*ar2)[m]);
void print(int n,int m,pecahan (*ar2)[m]);