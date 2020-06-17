#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
void scan(int n,int *time){
    int i;
    //Scan detik
    for(i=0;i<n;i++){
        scanf("%d",&time[i]);
    }
}
void hitung(int n,int time[]){
    int i,tempMenit,tempDetik;

    for(i=0;i<n;i++){
        waktu[i].jam = (time[i] / 3600) % 100;//menghitung jam
        
        tempMenit = time[i] % 3600;//Sisa dari hitungan jam
        waktu[i].menit = tempMenit / 60;//Menghitung menit

        waktu[i].detik = tempMenit % 60;//Sisa dari hitungan jam = detik
    }
}
void moveline(int i,int j){//Menukarkan value
    int temp;
    
    temp = waktu[i].jam;
    waktu[i].jam = waktu[j].jam;
    waktu[j].jam = temp;

    temp = waktu[i].menit;
    waktu[i].menit = waktu[j].menit;
    waktu[j].menit = temp;
    
    temp = waktu[i].detik;
    waktu[i].detik = waktu[j].detik;
    waktu[j].detik = temp;
}
void urutkan(int n){//Mengurutkan waktu dari yang terkecil
    int i,move;

    do{
        move = 0;
        for(i=0;i<n-1;i++){
            if(waktu[i].jam > waktu[i+1].jam){
                moveline(i,i+1);
                move++;
            }
            else if(waktu[i].jam == waktu[i+1].jam){
                if(waktu[i].menit > waktu[i+1].menit){
                    moveline(i,i+1);
                    move++;
                }
                else if(waktu[i].menit == waktu[i+1].menit){
                    if(waktu[i].detik > waktu[i+1].detik){
                        moveline(i,i+1);
                        move++;
                    }
                }
            }
        }
    }while(move!=0);
}
void print(int n){
    int i;
    //Print waktu sesuai format
    for(i=0;i<n;i++){
            
            if(waktu[i].jam<10){
                printf("0%d:",waktu[i].jam);
            }else{
                printf("%d:",waktu[i].jam);
            }
            if(waktu[i].menit<10){
                printf("0%d:",waktu[i].menit);
            }else{
                printf("%d:",waktu[i].menit);
            }
            if(waktu[i].detik<10){
                printf("0%d",waktu[i].detik);
            }else{
                printf("%d",waktu[i].detik);
            }
            printf("\n");
    }
}