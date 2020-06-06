#include "head.h"
#include "mesinkata.h"
#include "mesinkarakter.h"
int main(){
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
    char pita[100];
    xit = 0;

    readPeserta();
    readProgram();

    printf("Welcome to KenDB\nVersion Alpha\n\n");
    
    while(xit == 0){
        insertQuery(pita);
        startKata(pita);
        
        if(strcmp(getCKata(),"INSERT") == 0){
            insert(pita);
        }
        else if(strcmp(getCKata(),"UPDATE") == 0){
            update(pita);
        }
        else if(strcmp(getCKata(),"DELETE") == 0){
            deleteQ(pita);
        }
        else if(strcmp(getCKata(),"SELECT") == 0){
            // select(pita);
        }
        else if((strcmp(getCKata(),"nice") == 0) && (jumlahKata(pita) == 4)){
            outCheck(pita);
        }
        else{
            printf("Query tidak valid\n\n");
        }
    }

    system("exit");
    return 0;
};