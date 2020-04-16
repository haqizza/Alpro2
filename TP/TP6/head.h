#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (MBL19) Maman Berlibur dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
typedef struct{
    char tempat[20];
    int transport;
    int inap;
    int total;
}list;
int n;
list final[50];//Final Array
list temp;//Temporary Array
list arr[3][50];//Main Array
char nama[3][20];

void load(int n1[]);//Load to final array
void moveline(int i,int j);//Sort tool
void bubble(int n1[],char order,char value[]);//Bubble sort
void quick(int left,int right,char order,char value[]);//Quick sort
void selection(int n1[],char order,char value[]);//Selection Sort
void insertion(int n1[],char order,char value[]);//Insertion Sort
void printSort(int n1[]);//Sorted Data Print
void printSend(int n1[]);//Sending Print