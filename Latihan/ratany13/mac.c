#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
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

int pisah(char pita[],char (*pita2)[100],int *panjang){///Menyalin setiap kata dari pita ke array
    int i = 0;
    strcpy(pita2[i],getCKata());
    panjang[i] = getPanjangKata();
    i++;

    while(EOPKata(pita) == 0){
        incKata(pita);
        panjang[i] = getPanjangKata();
        strcpy(pita2[i],getCKata());//copy kata ke array
        i++;//penghitung jumlah kata
    }

    return i;//jumlah kata yang ditemukan di return untuk disimpan dan selanjutnya digunakan
}
int filterA(int n,char (*pita2)[100],int *panjang){//Menghitung banyak 'a' di setiap kata
    int i,j,k,jumlah;
    
    //For untuk mengecek setiap huruf dalam array 2 dimensi
    for(i=0;i<n;i++){
        jumlah = 0;
        for(j=0;j < strlen(pita2[i]);j++){
            if(pita2[i][j] == 'a'){
                jumlah++; //jika ditemukan, jumlah ditambahkan
            }
        }
        if(jumlah < 2){
            for(k=i;k<n-1;k++){
                strcpy(pita2[k],pita2[k+1]);
            }
            n -= 1;
        }
    }
    return n;
}
void spacePrint(int space,int longer,int value){//Space print
    int j;
    space = 20 - value;//minus longer with record value length, then assign to space
    for(j=0;j<space;j++){//Printing space as long as space
        printf(" ");
    }
}
void print(int n,char pita2[][100],int panjang[]){//mencetak array pita2
    int j,i = 0, stop = 0, space = 0;
    int printSpace[100][1];

    for(i;i<n;i++){
        if((space + panjang[i+1]) < lebar){
            space += panjang[i];
            printSpace[i];
        }
        
        i++;
    }

    for(i=0;i<n;i++){
        j = 0;
        if(j>0){//Spasi diprint dimulai setelah kata pertama
            printf(" ");
        }
        j = 1;
    }
    
}