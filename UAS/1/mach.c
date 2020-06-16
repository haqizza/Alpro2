#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Ujian Akhir Semester (msksh20) Mesin Karakter Stay Home dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
void start(char pita[]){
    indeks = 0;
    cc = pita[indeks];
}
void inc(char pita[]){
    indeks++;
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
int check(char pita[]){
    int hasil, counter=0;
    int awal = 0;
    char cAwal,cAkhir;

    while(EOP() == 0){
        
        if(awal == 0){//Is first chacter has found?
            if(getCC() != ' '){//If this character not space
                cAwal = getCC();//assign this character to cAwal
                awal = 1;//First character Found
            }
        }
        if(getCC() != ' '){
            cAkhir = getCC();//Follow character until end, assign as last character
        }
        if(getCC() == cAwal){//If along this read, found another character like first character
            counter++;//count it
        }

        inc(pita);
    }

    if((cAwal == cAkhir) && (counter>2)){
        hasil = 1;//Condition clear
    }else{
        hasil = 0;//Condition failed
    }

    return hasil;
}
void print(int hasil){
    if(hasil == 1){
        printf("Hore.\n");
    }else{
        printf("Sabar Menanti.\n");
    }
}