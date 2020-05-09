#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi Kuis 2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
int scan(){
    int i,n;

    scanf("%d",&n);//scan array number

    for(i=0;i<n;i++){//scan array value
        scanf("%d %d",&pecah[i].pembilang,&pecah[i].penyebut);
    }
    
    scanf("%d %d",&cari.pembilang,&cari.penyebut);//Scan value want to search

    return n;
}
void sort(int n){//Bubble sort
    int i,j,move,temp;
    
    do{
        move = 0;
        for(i=0;i<n-1;i++){
            if((pecah[i].pembilang*pecah[i+1].penyebut)<(pecah[i+1].pembilang*pecah[i].penyebut)){
                
                //Value swap
                temp = pecah[i].pembilang ;
                pecah[i].pembilang = pecah[i+1].pembilang ;
                pecah[i+1].pembilang = temp;

                temp = pecah[i].penyebut ;
                pecah[i].penyebut = pecah[i+1].penyebut ;
                pecah[i+1].penyebut = temp;

                move++;
            }
        }
    }while(move!=0);    
}
void binarySearch(int n){//Binary Search
    int k,i=0,j=n,found=0;
    
    while((found==0)&& i<=j){
        k = (int)(i+j)/2;
        
        if((pecah[k].pembilang == cari.pembilang)&&(pecah[k].penyebut == cari.penyebut)){
            found = 1;
        }else{
            if((pecah[k].pembilang*cari.penyebut)<(pecah[k].penyebut*cari.pembilang)){
                j = k-1;
            }else{
                i = k+1;
            }
        }
    }

    if(found == 1){
        printf("ditemukan\n");
    }else{
        printf("tidak ditemukan\n");
    }
}