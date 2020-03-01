#include "header.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP1 (MAMEN19) MAtriks Mudah Emang Nice dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int j=0,i,k,n,m,x,step;
    
    
    //n & m scan and matrix initialization
    scanf("%d", &n);
    scanf("%d", &m);
    char matrix[n][m];
    
    //Matrix scan
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c", &matrix[i][j]);
        }
    }

    scanf("%d", &step); //how transformation want to do?
    char steps[step],c; //Steps command array initialize

    //Commands Input
    for(i=0;i<step;i++){
        scanf(" %c", &steps[i]);
    }

    //Transforms
    for(i=0;i<step;i++){
        c = steps[i];
        if(c=='A'){
            char matrix1[m][n];
            transpose(n,m,matrix,matrix1);//Transpose
            x=m;
            m=n;
            n=x;
            matrix[n][m];
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_
        }else if(c=='B'){
            char matrix1[n][m];
            reflectS(n,m,matrix,matrix1);//Reflect right
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_
        }
        else if(c=='C'){//Reflect top
            char matrix1[n][m];
            reflectT(n,m,matrix,matrix1);
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_
        }
        else if(c=='D'){
            char matrix1[m][n];
            transpose(n,m,matrix,matrix1);//Transpose
            x=m;
            m=n;
            n=x;
            matrix[n][m];
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_

            matrix1[n][m];
            reflectS(n,m,matrix,matrix1);//Reflect right
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_
        }else if(c=='E'){
            char matrix1[n][m];
            reflectS(n,m,matrix,matrix1);//Reflect right
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_

            matrix1[m][n];
            transpose(n,m,matrix,matrix1);//Transpose
            x=m;
            m=n;
            n=x;
            matrix[n][m];
            move(n,m,matrix,matrix1);//Assign transformed matrix to _matrix_
        }else{
            printf("Perintah tidak terdaftar");//If command not exist
        }
    }
    
    print(n,m,matrix);//Final  print
    

    system("pause");
    return 0;
}