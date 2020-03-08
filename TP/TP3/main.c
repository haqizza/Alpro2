#include "header.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP3 (ANCI219) Ahmad Main Fibonacci 2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i=0,j=0;
    scanf("%d",&first);//First number scan
    scanf("%d",&diff);//Difference scan
    scanf("%d",&n);
    scanf("%d",&m);
    int matrix[n][m];//Fibonacci matrix
    int wazan[n][m];//Comparison matrix
    
    scan(wazan);//Comparison matrix scan

    arrange(matrix,i,j);//Make fibonacci
    
    print(matrix,wazan);//Final print
    
    system("pause");
    return 0;
}