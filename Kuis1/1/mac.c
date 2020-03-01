#include"head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi Kuis 1 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void scan(int n,int m,pecahan (*arr)[m]){//Scan Array
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d %d",&arr[i][j].pem,&arr[i][j].pen);
        }
    }
}
void banding(int n,int m,pecahan (*ar1)[m],pecahan (*ar2)[m]){//Membandingkan pecahan dan assigning jika sesuai syarat
    int i,j;
    float a,b;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a = (float)ar1[i][j].pem/(float)ar1[i][j].pen;//Menghitung pecahan, assigning ke a
            b = (float)ar2[i][j].pem/(float)ar2[i][j].pen;//Menghitung pecahan, assigning ke b
            if(a<b){//Membandingkan nilai a dan b
                ar2[i][j].pem = ar1[i][j].pem;//Memasukkan pembilang array besar ke kecil
                ar2[i][j].pen = ar1[i][j].pen;//Memasukkan penyebut array besar ke kecil
            }
        }   
    }
}
void print(int n,int m,pecahan (*ar2)[m]){//Print Array Kecil
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d %d\n",ar2[i][j].pem,ar2[i][j].pen);
        }
    }
}