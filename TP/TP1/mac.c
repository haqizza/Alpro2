#include "header.h"

void transpose(int n,int m,char (*matrix)[m],char(*matrix1)[n]){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix1[j][i] = matrix[i][j];
        }
    }
    
}
void reflectS(int n,int m,char (*matrix)[m],char(*matrix1)[m]){
    int i,j,k;

    for(i=0;i<n;i++){
        k=m-1;
        for(j=0;j<m;j++){
            matrix1[i][k] = matrix[i][j];
            k--;
        }
    }
}
void reflectT(int n,int m,char (*matrix)[m],char(*matrix1)[m]){
    int i,j,k=n-1;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix1[k][j] = matrix[i][j];
        }
        k--;
    }
}
void rotateR(int n,int m,char (*matrix)[m],char(*matrix1)[n]){
    int i,j,x,y;

    y=m-1;
    for(i=0;i<n;i++){
        x=0;
        for(j=0;j<m;j++){
            matrix1[x][y] = matrix[i][j];
            x++;
        }
        y--;
    }
}
void rotateL(int n,int m,char (*matrix)[m],char(*matrix1)[n]){
    int i,j,x,y;

    for(i=0;i<n;i++){
        y=i;
        x=m-1;
        for(j=0;j<m;j++){
            matrix1[x][y] = matrix[i][j];
            x--;
        }        
    }
}
void move(int n,int m,char (*matrix)[m],char(*matrix1)[m]){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix[i][j] = matrix1[i][j];
        }        
    }
}
void print(int n,int m,char matrix[n][m]){
    int i,j,x;
    for(i=0;i<n;i++){
        x=0;
        for(j=0;j<m;j++){
            if(x!=0){
                printf(" ");
            }
            printf("%c",matrix[i][j]);
            x=1;
        }
        printf("\n");
    }
}