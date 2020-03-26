#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP4 (APK19) Anton Pebisnis Kayu dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    char tempat[20];
    float jarak;
    int waktu;
}list;
list temp;
list arr[13];

void selection(int n,char o,char value[]);
void insertion(int n,char o,char value[]);
void printSort(int n);
void printSend(int n,int num,char value[]);