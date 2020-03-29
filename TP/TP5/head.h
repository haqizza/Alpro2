#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi T5 (SDSF19) Selamat Datang di Sekolah Favorit dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    char nama[20];
    char kelas;
    float mat;
    float sain;
    float en;
    float in;
}list;
list temp;//Temporary Array
list arr[100];//Main Array
int na,nb,nc;

void scan(int n);//Student and Scores Input
void checkPos(int n);//Check Class (Position) in Array
void bubble2(int n,int i1,int ns);//Sort tool
void bubble(int n);//Bubble sort
void quick(int left,int right,char par);//Quick sort
void print(int n,int a,int b,int c);//Print