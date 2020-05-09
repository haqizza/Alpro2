#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP8 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    char judul[40];
    char author[40];
    char genre[40];
    char toko[20];
}bukus;
typedef struct{
    char kode[40];
    char nama[40];
}authors;
typedef struct{
    char kode[40];
    char nama[40];
}tokos;
typedef struct{
    char kode[40];
    char nama[40];
}genres;

//File buku mentah saya tidak tahu harus dirubah atau tetap, jadi saya anggap gak dirubah
//Kalau di fungsi ada yang tidak sesuai yang diinginkan, tapi tidak dijelaskan di soal, jangan salahkan saya

//Jalan Code
//Di awal data akan diproses, lalu menampilkan data dari ListBukuFinal.dat
//Setiap ada penambahan data, data akan kembali diproses, hingga ListBukuFinal.dat terupdate, dan data buku terbaru akan ditampilkan di front

bukus buku[30];
authors author[30];
tokos toko[30];
genres genre[30];
bukus bukufinal[30];

//Functions
void readBuku(int *n);//Read buku mentah datas
void readOther(int *n,char par);//Read other file datas
int search(int n[], char value[40],char par);//Search value
void changeValues(int n[]);//Change code value to name
void writeFinal(int n[]);//Write buku final
void border(int longer[]);//Print table border
void spacePrint(int space,int longer,int value);//Print space
void printTable(int n[]);//Print data as table
void addBuku(int *n);//add buku data(append)
void addOther(int *n,char par);//add other data(append)
void menu(int *n);//Show menu
void front(int *n);//Front. Start