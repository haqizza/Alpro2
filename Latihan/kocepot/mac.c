#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
void hitung(char par,int langkah,int count){
    hasil[stepCounter].x = cepot.x;
    hasil[stepCounter].y = cepot.y;

    if(par == 'h'){
        hasil[stepCounter].x = cepot.x = cepot.x + count;
    }else if(par == 'H'){
        hasil[stepCounter].x = cepot.x = cepot.x - count;
    }
    else if(par == 'v'){
        hasil[stepCounter].y = cepot.y = cepot.y + count;
    }
    else if(par == 'V'){
        hasil[stepCounter].y = cepot.y = cepot.y - count;
    }
    else if(par == 'm'){
        hasil[stepCounter].x = cepot.x = cepot.x + count;
        hasil[stepCounter].y = cepot.y = cepot.y + count;
    }
    else if(par == 'M'){
        hasil[stepCounter].x = cepot.x = cepot.x - count;
        hasil[stepCounter].y = cepot.y = cepot.y - count;
    }
}
void print(int cases){
    int i;
    //Print koordinat cepot untuk setiap kasus
    for(i=0;i<cases;i++){
        printf("%d %d\n",hasil[i].x,hasil[i].y);
    }
}