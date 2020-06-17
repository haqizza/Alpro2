#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int n;
    char pita[1000];
    char pita2[100][100];
    int panjang[100];//Variable ini untuk menyimpan  banyak karakter dalam setiap kata di pita2
    
    scanf(" %999[^\n]s",pita);
    scanf("%d",&lebar);
    startKata(pita);

    n = pisah(pita,pita2,panjang);//Menyalin setiap kata dari pita ke array; n adalah jumlah kata yang ditemukan

    n = filterA(n,pita2,panjang);//Filter kata dengan 'a' minimal 2
    
    print(n,pita2,panjang);//mencetak aray pita2

    system("pause");
    return 0;
}