#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void transpose(int n,int m,char (*matrix)[m],char(*matrix1)[n]);
void reflectS(int n,int m,char (*matrix)[m],char(*matrix1)[m]);
void reflectT(int n,int m,char (*matrix)[m],char(*matrix1)[m]);
void rotateR(int n,int m,char (*matrix)[m],char(*matrix1)[n]);
void rotateL(int n,int m,char (*matrix)[m],char(*matrix1)[n]);
void move(int n,int m,char (*matrix)[m],char(*matrix1)[m]);
void print(int n,int m,char matrix[n][m]);