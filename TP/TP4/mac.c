#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP4 (APK19) Anton Pebisnis Kayu dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void selection(int n,char o,char value[]){
    int i,j,min,max,x;
    x = strcmp(value,"Waktu");
    if(x==0){
        if(o=='a'){
            for(i=0;i<n;i++){
                min = i;
                for(j=i+1;j<n;j++){
                    if(arr[min].waktu>arr[j].waktu){
                        min = j;
                    }
                }
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[min].tempat);
                arr[i].jarak = arr[min].jarak;
                arr[i].waktu = arr[min].waktu;
                
                strcpy(arr[min].tempat,temp.tempat);
                arr[min].jarak = temp.jarak;
                arr[min].waktu = temp.waktu;
            }
        }else if(o=='d'){
            for(i=0;i<n;i++){
                max = i;
                for(j=i+1;j<n;j++){
                    if(arr[max].waktu<arr[j].waktu){
                        max = j;
                    }
                }
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[max].tempat);
                arr[i].jarak = arr[max].jarak;
                arr[i].waktu = arr[max].waktu;
                
                strcpy(arr[max].tempat,temp.tempat);
                arr[max].jarak = temp.jarak;
                arr[max].waktu = temp.waktu;
            }
        }
    }else if(strcmp(value,"Jarak")==0){
        if(o=='a'){
            for(i=0;i<n;i++){
                min = i;
                for(j=i+1;j<n;j++){
                    if(arr[min].jarak>arr[j].jarak){
                        min = j;
                    }
                }
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[min].tempat);
                arr[i].jarak = arr[min].jarak;
                arr[i].waktu = arr[min].waktu;
                
                strcpy(arr[min].tempat,temp.tempat);
                arr[min].jarak = temp.jarak;
                arr[min].waktu = temp.waktu;
            }
        }else if(o=='d'){
            for(i=0;i<n;i++){
                max = i;
                for(j=i+1;j<n;j++){
                    if(arr[max].jarak<arr[j].jarak){
                        max = j;
                    }
                }
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[max].tempat);
                arr[i].jarak = arr[max].jarak;
                arr[i].waktu = arr[max].waktu;
                
                strcpy(arr[max].tempat,temp.tempat);
                arr[max].jarak = temp.jarak;
                arr[max].waktu = temp.waktu;
            }
        }
    }
}
void insertion(int n,char o,char value[]){
    int i,j;
    
    if(strcmp(value,"Waktu")==0){
        if(o=='a'){
            for(i=1;i<n;i++){
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;

                while((temp.waktu<arr[j].waktu)&&(j>=0)){
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }else if(o=='d'){
            for(i=1;i<n;i++){
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;

                while((temp.waktu>arr[j].waktu)&&(j>=0)){
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }
    }else if(strcmp(value,"Jarak")==0){
        if(o=='a'){
            for(i=1;i<n;i++){
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;

                while((temp.jarak<arr[j].jarak)&&(j>=0)){
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }else if(o=='d'){
            for(i=1;i<n;i++){
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;

                while((temp.jarak>arr[j].jarak)&&(j>=0)){
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }
    }
}
void printSort(int n){
    int i,j;
    //Print according to format
    printf("=== Hasil Sorting ===\n");
    for(i=0;i<n;i++){
        printf("%s %.1fkm %dm\n",arr[i].tempat,(arr[i].jarak/2),(arr[i].waktu/2));
    }
}
void printSend(int n,int num,char value[]){
    int i,j,waktu=0,c='A',counter=1;
    float jarak=0;
    //Print according to format
    printf("=== Pengiriman ===\n");

    if(strcmp(value,"Waktu")==0){
        num = num*60;
        printf("%c. Hari ke-%d\n",c,counter);
        for(i=0;i<n;i++){
            waktu += arr[i].waktu;
            if(waktu>num){
                c+=1;
                counter+=1;
                printf("%c. Hari ke-%d\n",c,counter);
                waktu=arr[i].waktu;
            }
            printf("- %s\n",arr[i].tempat);
        }
    }else if(strcmp(value,"Jarak")==0){
        printf("%c. Hari ke-%d\n",c,counter);
        for(i=0;i<n;i++){
            jarak += arr[i].jarak;
            if(jarak>(float)num){
                c+=1;
                counter+=1;
                printf("%c. Hari ke-%d\n",c,counter);
                jarak=arr[i].jarak;
            }
            printf("- %s\n",arr[i].tempat);
            
        }
    }

}