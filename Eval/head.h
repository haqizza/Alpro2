#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Saya Muhammad Izzatul Haq mengerjakan Evaluasi (WFHYA220) WFH ya Eval! 1C2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

void load(int n,int m,char (*arr)[20],char (*arr2)[20],char (*final)[20]);//Load to final array
void bubble(int n,char (*final)[20]);//Bubble sort
void quick(char (*final)[20],int left,int right);//Quick sort
void selection(int n,char (*final)[20]);//Selection Sort
void insertion(int n,char (*final)[20]);//Insertion Sort
void printSort(int n,char (*final)[20]);//Sorted Data Print