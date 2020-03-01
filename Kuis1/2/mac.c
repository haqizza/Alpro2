#include"head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi Kuis 1 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void susun(int* arr,int n,int i){
    int j;

    if(n==0){//Jika 0 sudah didapat, berarti perhitungan selesai
        arr[i] = 0;
    }else{
        arr[i] = n/2;
        n = arr[i];    
        susun(arr,n,i+1);
    }
}
int panjang(int* arr){
    int i=0,jml,a;
    while(1){
        a = arr[i];
        i++;
        if(a==0){//jika sudah menemukan 0 keluar dari loop
            break;
        }
        
    }
    jml = i;
    return jml;
}
void print(int* arr,int n,int p,int jml){
    int i,j;

    for(i=0;i<jml-p;i++){//Print array dikurangi p
        if(i>0){
            printf(" ");    
        }
        printf("%d",arr[i]);
    }
    printf("\n");
}