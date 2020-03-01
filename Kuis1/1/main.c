#include"head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi Kuis 1 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,m,i,j;

    scanf("%d",&n);//Scan baris
    scanf("%d",&m);//Scan kolom
    pecahan ar1[n][m];
    pecahan ar2[n][m];

    scan(n,m,ar1);//scan array kecil
    scan(n,m,ar2);//scan array besar

    banding(n,m,ar1,ar2);//Membandingkan pecahan
    
    print(n,m,ar2);
    
    system("pause");
    return 0;
}