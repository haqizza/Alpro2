#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int n,m;
    int x[100];
    int y[100];
    char par[2];

    scanf("%c",&par[0]);//Scan K
    n = scan(x);//Scan value dan jumlah
    scanf(" %c",&par[1]);//Scan B
    m = scan(y);////Scan value dan jumlah

    long long int hasil[n][m];

    hitung(n,m,x,y,hasil);//hitung faktorial
    print(n,m,hasil);//print hasil

    system("pause");
    return 0;
}