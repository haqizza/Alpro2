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

int pisah(char pita[],char (*pita2)[100]){///Menyalin setiap kata dari pita ke array
    int i = 0;
    strcpy(pita2[i],getCKata());
    i++;

    while(EOPKata(pita) == 0){
        incKata(pita);
        strcpy(pita2[i],getCKata());//copy kata ke array
        i++;//penghitung jumlah kata
    }

    return i;//jumlah kata yang ditemukan di return untuk disimpan dan selanjutnya digunakan
}
void hitungA(int n,char (*pita2)[100],int *jumlahA){//Menghitung banyak 'a' di setiap kata
    int i,j,jumlah;
    //For untuk mengecek setiap huruf dalam array 2 dimensi
    for(i=0;i<n;i++){
        jumlah = 0;
        for(j=0;j < strlen(pita2[i]);j++){
            if(pita2[i][j] == 'a'){
                jumlah++; //jika ditemukan, jumlah ditambahkan
            }
        }
        jumlahA[i] = jumlah;
    }
}
void urutkan(int n,char (*pita2)[100],int *jumlahA){//Mengurutkan dari yang paling banyak 'a'
    int i,move;
    char temp[100];
    int temp2;
    //Sorting menggunakan Bubble Sort
    do{
        move = 0;
        for(i=0;i<n-1;i++){//For untuk melihat sepanjang data jumlahA
            if(jumlahA[i]<jumlahA[i+1]){//Sorting secara decrease
                //Swap data
                strcpy(temp,pita2[i]);
                strcpy(pita2[i],pita2[i+1]);
                strcpy(pita2[i+1],temp);
                
                temp2 = jumlahA[i];
                jumlahA[i] = jumlahA[i+1];
                jumlahA[i+1] = temp2;

                move++;//Bila masih ada pergerakan, move ditambahkan
            }
        }
    }while(move!=0);//Jika sudah tidak ada perpindahan, do..while selesai
}
void print(int n,char pita2[][100],int jumlahA[]){//mencetak array pita2
    int i,j=0;

    for(i=0;i<n;i++){
        if(jumlahA[i] > 0){//Hanya kata yang berhuruf 'a' yang di print
            if(j>0){//Spasi diprint dimulai setelah kata pertama
                printf(" ");
            }
            printf("%s",pita2[i]);
            j = 1;
        }
        
    }
    printf("\n");
}