#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int scan(int *arr){
    int i,n;

    scanf("%d",&n);//scan jumlah header
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);//scan data header
    }

    return n;
}
int fpb(int a,int b){
    if((b==0)){
        return a;
    }else{
        int temp = a % b;//a di mod dengan b, dicari hingga didapat 0 yang berarti pe-modnya fpb
        return fpb(b,temp);
    }
}
void hitung(int n,int m,int x[],int y[],int (*hasil)[n]){
    int i,j;

    for(i=0;i<n;i++){//lopp baris
        for(j=0;j<m;j++){//loop kolom
            hasil[i][j] = fpb(y[i],x[j]);//hasil fpb di assign ke array hasil
        }
    }
}
void print(int n,int m,int (*hasil)[n]){
    int i,j;
    //Print hasil fpb
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\n",hasil[i][j]);
        }
    }
}