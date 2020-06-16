#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Ujian Akhir Semester (mskss20) Mesin Kata Stay Safe dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
void startKata(char pita[]){
    indeks = 0;
    panjangKata = 0;
    
    while(pita[indeks] == ' '){
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != '.')){
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
    while((pita[indeks] != ' ') && (pita[indeks] != '.')){
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
    if(pita[indeks] == '.'){
        return 1;
    }else{
        return 0;
    }
}
int KCheck(char value[]){
    int i,n,jumlah = 0;
    n = strlen(value);
    
    for(i=0;i<n;i++){
        if((value[i] != 'a') && (value[i] != 'i') && (value[i] != 'u') && (value[i] != 'e') && (value[i] != 'o') && (value[i] != '.') && (value[i] != ' ')){
            jumlah++;
        }
    }
    
    return jumlah;
}
int VCheck(char value[]){
    int i,n,jumlah = 0;
    n = strlen(value);

    for(i=0;i<n;i++){
        if((value[i] == 'a') || (value[i] == 'i') || (value[i] == 'u') || (value[i] == 'e') || (value[i] == 'o')){
            jumlah++;
        }
    }
    
    return jumlah;
}
int checkKata(char pita[]){
    int hasil = 0,v1,v2,k1,k2;
    char temp[50];

    while(EOPKata(pita) == 0){
        strcpy(temp,getCKata());//assign current kata to temp
        incKata(pita);

        k1 = KCheck(temp);//consonant check
        v1 = VCheck(temp);//vocal check
        v2 = VCheck(getCKata());//vocal check
        k2 = KCheck(getCKata());//consonant check
        
        if((k1>k2) && (v2>v1)){//Condition check
            hasil = 1;
            break;
        }
    }

    return hasil;
}
void print(int hasil){
    if(hasil == 1){
        printf("Perjuangan dengan Senyuman.\n");
    }else{
        printf("Pembelajaran untuk Jiwa.\n");
    }
}