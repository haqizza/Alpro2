#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 (cacaA13) Cari Cari A dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
void start(char pita[]){
    indeks = 0;
    cc = pita[indeks];
}
void inc(char pita[]){
    indeks++;
    cc = pita[indeks];
}
void dec(char pita[]){//Tambahan, untuk decrement char
    indeks--;
    cc = pita[indeks];
}
void adv(char pita[]){
    indeks++;
    while((cc == ' ') && (EOP() == 0)){
    inc(pita);
    }
}
char getCC(){
    return cc;
}
int EOP(){
    if(cc == '.'){
        return 1;
    }else{
        return 0;
    }
}

int hitungBlank(char pita[]){
    int jumlah = 0;
    char temp[3];

    while(EOP() == 0){
        //Per 3 char disimpan dalam array
        temp[0] = getCC();
        inc(pita);
        temp[1] = getCC();
        inc(pita);
        temp[2] = getCC();
        //Kemudian dicek
        if(((temp[0] != ' ') && (temp[0] != '.')) && (temp[1] == ' ') && ((temp[2] != ' ') && (temp[2] != '.'))){
            jumlah++;
        }
        //Agar char tengah bisa menjadi char depan di loop berikutnya, indeks/current character pita dikurangi
        dec(pita);
    }

    return jumlah;
}