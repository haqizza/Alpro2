#include "header.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP3 (ANCI219) Ahmad Main Fibonacci 2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void scan(int (*wazan)[m]){//Comparison matrix scan
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&wazan[i][j]);
        }
    }
}
void arrange(int (*matrix)[m],int i,int j){
    int x;
    if((i==0)&&(j==0)){
        matrix[i][j] = first;

        arrange(matrix,i,j+1);
    }else if(j<m){
        matrix[i][j] = first = diff = first + diff;

        arrange(matrix,i,j+1);
    }else if(i<n){
        arrange(matrix,i+1,0);
    }
    
}
void print(int (*matrix)[m],int (*wazan)[m]){//Print
    int i,j,x;
    printf("Matriks Fibonacci:\n");
    for(i=0;i<n;i++){
        x=0;
        for(j=0;j<m;j++){
            if(x!=0){
                printf(" ");
            }
            printf("%d",matrix[i][j]);
            x++;
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriks Pembanding:\n");
    for(i=0;i<n;i++){
        x=0;
        for(j=0;j<m;j++){
            if(x!=0){
                printf(" ");
            }
            if(matrix[i][j] >= wazan[i][j]){
                printf(":D");
            }else{
                printf("D:");
            }
            x=1;
        }
        printf("\n");
    }
}