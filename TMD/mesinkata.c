#include "mesinkata.h"

void startKata(char pita[]){
    indeks = 0;
    panjangKata = 0;
    
    while(pita[indeks] == ' '){
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != ';')){
        cKata[panjangKata] = pita[indeks];
        indeks++;
        panjangKata++;
    }
    cKata[panjangKata] = '\0';
}
void resetKata(){
    panjangKata = 0;
    cKata[panjangKata] = '\0';
}
void incKata(char pita[]){
    panjangKata = 0;
    
    while(pita[indeks] == ' '){
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != ';')){
        cKata[panjangKata] = pita[indeks];
        indeks++;
        panjangKata++;
    }
    cKata[panjangKata] = '\0';
}
char* getCKata(){
    return cKata;
}
int getPanjangKata(){
    return panjangKata;
}
int EOPKata(char pita[]){
    if(pita[indeks] == ';'){
        return 1;
    }else{
        return 0;
    }
}