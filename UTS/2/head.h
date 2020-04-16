#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (MBL19) Maman Berlibur dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    char tempat[20];
    float jarak;
    int waktu;
}list;
list temp;//Temporary Array
list arr[13];//Main Array

void selection(int n,char o,char value[]);//Selection Sort
void insertion(int n,char o,char value[]);//Insertion Sort
void printSort(int n);//Sorted Data Print
void printSend(int n,int num,char value[]);//Sending Print