#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int indeks;
int panjangKata;
char cKata[50];
int lebar;

void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char* getCKata();
int getPanjangKata();
int EOPKata(char pita[]);

int pisah(char pita[],char (*pita2)[100],int *panjang);//Menyalin setiap kata dari pita ke array; n adalah jumlah kata yang ditemukan
int filterA(int n,char (*pita2)[100],int *panjang);//Menghitung banyak 'a' di setiap kata
void print(int n,char pita2[][100],int panjang[]);//mencetak aray pita2
