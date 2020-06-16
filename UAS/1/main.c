#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Ujian Akhir Semester (msksh20) Mesin Karakter Stay Home dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int hasil;
    char pita[500];

    scanf(" %499[^\n]s",pita);
    start(pita);
    
    hasil = check(pita);

    print(hasil);

    system("pause");
}