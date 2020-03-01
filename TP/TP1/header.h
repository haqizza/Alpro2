#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP1 (MAMEN19) MAtriks Mudah Emang Nice dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void transpose(int n,int m,char (*matrix)[m],char(*matrix1)[n]);
void reflectS(int n,int m,char (*matrix)[m],char(*matrix1)[m]);
void reflectT(int n,int m,char (*matrix)[m],char(*matrix1)[m]);
void rotateR(int n,int m,char (*matrix)[m],char(*matrix1)[n]);
void rotateL(int n,int m,char (*matrix)[m],char(*matrix1)[n]);
void move(int n,int m,char (*matrix)[m],char(*matrix1)[m]);
void print(int n,int m,char matrix[n][m]);