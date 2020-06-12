#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mesinkata.h"
#include "mesinkarakter.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
typedef struct{
    char id[10];
    char nama[40];
    char program[10];
}pesertas;
typedef struct{
    char id[10];
    char namaProgram[40];
    char pengajar[40];
}programs;

pesertas peserta[50];
programs program[50];

int nPeserta;
int nProgram;
int xit;

void insertQuery(char *pita);
void EOPCheck(char pita[]);
int jumlahKata(char pita[]);
int search(char par,char kata[]);
void spacePrint(int space,int longer,int value);
void border(int longer[],int col);

void readPeserta();
void readProgram();
void writePeserta();
void writeProgram();

void addPeserta(char pita[]);
void addProgram(char pita[]);
void changePeserta(char pita[]);
void changeProgram(char pita[]);
void deletePeserta(char pita[]);
void deleteProgram(char pita[]);
void selectPeserta(char pita[]);
void selectProgram(char pita[]);
void selectJoin(char pita[]);

void insert(char pita[]);
void update(char pita[]);
void deleteQ(char pita[]);
void select(char pita[]);
void outCheck(char pita[]);