#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 (cacaA13) Cari Cari A dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    char pita[1000]; 
    
    scanf(" %999[^\n]s",pita);
    start(pita);

    printf("%d\n",hitungBlank(pita));//Print jumlah blank

    system("pause");
    return 0;
}