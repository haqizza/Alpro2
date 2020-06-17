#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int scan(int *arr){
    int i,n;

    scanf("%d",&n);//scan jumlah
    for(i=0;i<n;i++){//scan values
        scanf("%d",&arr[i]);
    }
    
    return n;//return jumlah
}
long long int faktorial(int angka){
    if((angka == 0) || (angka == 1)){//1 dan 0
        return 1;//faktorialnya 1
    }else{
        return (angka*faktorial(angka-1));//Return nilai faktorial, rekursif
    }
}
void hitung(int n,int m,int x[],int y[],long long int (*hasil)[n]){
    int i,j;

    for(j=0;j<m;j++){//For kolom
        for(i=0;i<n;i++){//For baris
            hasil[i][j] = faktorial(y[j]) * faktorial(x[i]);//faktorial kolom dan baris dikalikan, lalu di assign
        }
    }
}
void print(int n,int m,long long int (*hasil)[n]){
    int i,j;
    //Print hasil
    for(j=0;j<m;j++){//For kolom
        for(i=0;i<n;i++){//For baris
            printf("%lld\n",hasil[i][j]);
        }
    }
}