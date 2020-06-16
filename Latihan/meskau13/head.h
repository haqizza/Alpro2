#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int indeks;
int panjangKata;
char cKata[50];

void startKata(char pita[]);
void resetKata();
void incKata(char pita[]);
char* getCKata();
int getPanjangKata();
int EOPKata(char pita[]);

int pisah(char pita[],char (*pita2)[100]);//Menyalin setiap kata dari pita ke array; n adalah jumlah kata yang ditemukan
void hitungA(int n,char (*pita2)[100],int *jumlahA);//Menghitung banyak 'a' di setiap kata
void urutkan(int n,char (*pita2)[100],int *jumlahA);//Mengurutkan dari yang paling banyak 'a'
void print(int n,char pita2[][100],int jumlahA[]);//mencetak aray pita2
