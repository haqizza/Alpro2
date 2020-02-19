#include "header.h"
void transpose(int n,int m,char matrix[n][m],char matrix1[n][m]){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix1[j][i] = matrix[i][j];
        }
    }
}
void print(int n,int m, char matrix[n][m]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",matrix[i][j]);
            
        }
        printf("\n");
    }
}