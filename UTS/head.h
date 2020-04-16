#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi UTS (sblbl20) Si Blebek Blebek dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    long int berat;
    long int harga;
    char merk[20];
    char jenis[20];
}list;
list final[50];//Final Array
list arr[3][50];//Main Array
list temp;//Temporary Array

int load(int n1[],char value[]);//Load to final array
void moveline(int i,int j);//Sort tool
void bubble(int n);//Bubble sort
void quick(int left,int right);//Quick sort
void selection(int n);//Selection Sort
void insertion(int n);//Insertion Sort
void printSort(int n);//Sorted Data Print