#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Ujian Akhir Semester (mskss20) Mesin Kata Stay Safe dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int hasil;
    char pita[700];

    scanf(" %699[^\n]s",pita);
    startKata(pita);
    
    hasil = checkKata(pita);

    print(hasil);

    system("pause");

    return 0;
}