#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int n,m;
    int x[100];
    int y[100];
    char par[2];

    scanf(" %c",&par[0]);
    n = scan(x);//Scan header kolom
    scanf(" %c",&par[1]);
    m = scan(y);//scan header baris

    int hasil[n][m];

    hitung(n,m,x,y,hasil);//Hitung hasil kali fpb
    print(n,m,hasil);//Print hasil

    system("pause");
    return 0;
}