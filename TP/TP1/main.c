#include "header.h"

int main(){
    int i,j,k;

    scanf("%d", &n);
    scanf("%d", &m);
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%c", &matrix[i][j]);
        }
    }

    transpose(n,m,matrix,matrix1);
    printf("\n");
    print(n,m,matrix1);
    

    system("pause");
    return 0;
}