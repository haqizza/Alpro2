#include<stdio.h>
#include<stdlib.h>
void print(int n,int m, int matrix[n][m]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",matrix[i][j]);
            
        }
        printf("\n");
    }
}
int main(){
    int n,m,i,j,k;

    scanf("%d", &n);
    scanf("%d", &m);
    int matrix[n][m];
    int matrix1[m][n];
    

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    //Transpos
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix1[j][i] = matrix[i][j];
        }
    }
    //Refleksi
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matrix1[j][i] = matrix[i][j];
        }
    }

    print(n,m,matrix);
    printf("\n");
    print(m,n,matrix1);
    

    system("pause");
    return 0;
}