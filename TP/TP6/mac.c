#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (MBL19) Maman Berlibur dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//Selection Sort
void load(int n1[]){
    int i,j,m=0;
    for(i=0;i<3;i++){
        for(j=0;j<n1[i];j++){
            strcpy(final[m].tempat,arr[i][j].tempat);
            final[m].transport = arr[i][j].transport;
            final[m].inap = arr[i][j].inap;
            final[m].total = arr[i][j].total;
            m++;
        }
    }
}
void moveline(int i,int j){
    strcpy(temp.tempat,final[i].tempat);
    temp.transport = final[i].transport;
    temp.inap = final[i].inap;
    temp.total = final[i].total;

    strcpy(final[i].tempat,final[j].tempat);
    final[i].transport = final[j].transport;
    final[i].inap = final[j].inap;
    final[i].total = final[j].total;

    strcpy(final[j].tempat,temp.tempat);
    final[j].transport = temp.transport;
    final[j].inap = temp.inap;
    final[j].total = temp.total;
}
void bubble(int n1[],char order,char value[]){
    int i,j,move;
    
    do{
        move = 0;
        for(i=0;i<n-1;i++){
            if(order=='a'){
                if(strcmp(value,"HargaTransportasi")==0){
                    if(final[i].transport>final[i+1].transport){
                        moveline(i,i+1);               
                        move++;
                    }
                }else if(strcmp(value,"TotalBiaya")==0){
                    if(final[i].total>final[i+1].total){
                        moveline(i,i+1);               
                        move++;
                    }
                }else if(strcmp(value,"HargaPenginapan")==0){
                    if(final[i].inap>final[i+1].inap){
                        moveline(i,i+1);               
                        move++;
                    }
                }else if(strcmp(value,"NamaTempat")==0){
                    if(final[i].tempat[0]>final[i+1].tempat[0]){
                        moveline(i,i+1);               
                        move++;
                    }
                }
            }else if(order=='d'){
                if(strcmp(value,"HargaTransportasi")==0){
                    if(final[i].transport<final[i+1].transport){
                        moveline(i,i+1);               
                        move++;
                    }
                }else if(strcmp(value,"TotalBiaya")==0){
                    if(final[i].total<final[i+1].total){
                        moveline(i,i+1);               
                        move++;
                    }
                }else if(strcmp(value,"HargaPenginapan")==0){
                    if(final[i].inap<final[i+1].inap){
                        moveline(i,i+1);               
                        move++;
                    }
                }else if(strcmp(value,"NamaTempat")==0){
                    if(final[i].tempat[0]<final[i+1].tempat[0]){
                        moveline(i,i+1);               
                        move++;
                    }
                }
            }
        }
    }while(move!=0);    
}
void quick(int left,int right,char order,char value[]){
    int i=left,j=right;
    do{
        if(order == 'a'){
            if(strcmp(value,"HargaTransportasi")==0){
                while((final[i].transport<final[right].transport)&&(i<=j)){
                    i++;
                }
                while((final[j].transport>final[left].transport)&&(i<=j)){
                    j--;
                }
            }else if(strcmp(value,"TotalBiaya")==0){
                while((final[i].total<final[right].total)&&(i<=j)){
                    i++;
                }
                while((final[j].total>final[left].total)&&(i<=j)){
                    j--;
                }
            }else if(strcmp(value,"HargaPenginapan")==0){
                while((final[i].inap<final[right].inap)&&(i<=j)){
                    i++;
                }
                while((final[j].inap>final[left].inap)&&(i<=j)){
                    j--;
                }
            }else if(strcmp(value,"NamaTempat")==0){
                while((final[i].tempat[0]==final[right].tempat[0])&&(final[i].tempat[1]<final[right].tempat[1])&&(i<=j)){
                    i++;
                }
                while((final[i].tempat[0]<final[right].tempat[0])&&(i<=j)){
                    i++;
                }

                while((final[j].tempat[0]==final[left].tempat[0])&&(final[j].tempat[1]>final[left].tempat[1])&&(i<=j)){
                    j--;
                }
                while((final[j].tempat[0]>final[left].tempat[0])&&(i<=j)){
                    j--;
                }
            }
        }else if(order == 'd'){
            if(strcmp(value,"HargaTransportasi")==0){
                while((final[i].transport>final[right].transport)&&(i<=j)){
                    i++;
                }
                while((final[j].transport<final[left].transport)&&(i<=j)){
                    j--;
                }
            }else if(strcmp(value,"TotalBiaya")==0){
                while((final[i].total>final[right].total)&&(i<=j)){
                    i++;
                }
                while((final[j].total<final[left].total)&&(i<=j)){
                    j--;
                }
            }else if(strcmp(value,"HargaPenginapan")==0){
                while((final[i].inap>final[right].inap)&&(i<=j)){
                    i++;
                }
                while((final[j].inap<final[left].inap)&&(i<=j)){
                    j--;
                }
            }else if(strcmp(value,"NamaTempat")==0){
                while((final[i].tempat[0]>final[right].tempat[0])&&(i<=j)){
                    i++;
                }
                while((final[j].tempat[0]<final[left].tempat[0])&&(i<=j)){
                    j--;
                }
            }
        }

        if(i<j){
            moveline(i,j);
            i++;
            j--;
        }
    }while(i<j);
    
    if(left<j){
        quick(left,j,order,value);
    }
    if(i<right){
        quick(i,right,order,value);
    }
}
void selection(int n1[],char order,char value[]){
    int i,j,min,max;
        
    if(order=='a'){//Sort Ascending
        for(i=0;i<n;i++){
            min = i;//Assign minimum value
            for(j=i+1;j<n;j++){
                if(strcmp(value,"HargaTransportasi")==0){
                    if(final[min].transport>final[j].transport){//If temporary minimum value bigger, set smaller value as minimum value
                        min = j;
                    }
                }else if(strcmp(value,"TotalBiaya")==0){
                    if(final[min].total>final[j].total){
                        min = j;
                    }
                }else if(strcmp(value,"HargaPenginapan")==0){
                    if(final[min].inap>final[j].inap){
                        min = j;
                    }
                }else if(strcmp(value,"NamaTempat")==0){
                    if(final[min].tempat[0]>final[j].tempat[0]){
                        min = j;
                    }
                }
            }
            // Switch array datas
            moveline(i,min);
        }
    }else if(order=='d'){//Sort Descending
        for(i=0;i<n;i++){
            max = i;//Assign maximum value
            for(j=i+1;j<n;j++){
                if(strcmp(value,"HargaTransportasi")==0){
                    if(final[max].transport<final[j].transport){//If temporary maximum value smaller, set smaller value as maximum value
                        max = j;
                    }
                }else if(strcmp(value,"TotalBiaya")==0){
                    if(final[max].total<final[j].total){
                        max = j;
                    }
                }else if(strcmp(value,"HargaPenginapan")==0){
                    if(final[max].inap<final[j].inap){
                        max = j;
                    }
                }else if(strcmp(value,"NamaTempat")==0){
                    if(final[max].tempat[0]<final[j].tempat[0]){
                        max = j;
                    }
                }
            }
            // Switch array datas
            moveline(i,max);
        }
    }
}
void insertion(int n1[],char order,char value[]){
    int i,j;
    
    for(i=1;i<n;i++){
        //Set temp data
        strcpy(temp.tempat,final[i].tempat);
        temp.transport = final[i].transport;
        temp.inap = final[i].inap;
        temp.total = final[i].total;
        j=i-1;

        if(order=='a'){//Sort Ascending
            if(strcmp(value,"HargaTransportasi")==0){
                while((temp.transport<final[j].transport)&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }else if(strcmp(value,"TotalBiaya")==0){
                while((temp.total<final[j].total)&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }else if(strcmp(value,"HargaPenginapan")==0){
                while((temp.inap<final[j].inap)&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }else if(strcmp(value,"NamaTempat")==0){
                while((temp.tempat[0]<final[j].tempat[0])&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }
        }else if(order=='d'){//Sort Ascending
            if(strcmp(value,"HargaTransportasi")==0){
                while((temp.transport>final[j].transport)&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }else if(strcmp(value,"TotalBiaya")==0){
                while((temp.total>final[j].total)&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }else if(strcmp(value,"HargaPenginapan")==0){
                while((temp.inap>final[j].inap)&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }else if(strcmp(value,"NamaTempat")==0){
                while((temp.tempat[0]>final[j].tempat[0])&&(j>=0)){//Compare Values
                    strcpy(final[j+1].tempat,final[j].tempat);
                    final[j+1].transport = final[j].transport;
                    final[j+1].inap = final[j].inap;
                    final[j+1].total = final[j].total;
                    j-=1;
                }
            }
        }

        //Assign temp to array
        strcpy(final[j+1].tempat,temp.tempat);
        final[j+1].transport = temp.transport;
        final[j+1].inap = temp.inap;
        final[j+1].total = temp.total;
    }
}
void printSort(int n1[]){
    int i;
    //Print according to format
    printf("Data Tempat Wista di Indonesia:\n");
    for(i=0;i<n;i++){
        printf("%s Rp%d Rp%d Rp%d\n",final[i].tempat,final[i].transport,final[i].inap,final[i].total);
    }
}
void printSend(int n1[]){
    
    //Print according to format
    printf("-----------\n");
    printf("Rekomendasi\n");
    printf("-----------\n");
    printf("Tujuan: %s\n",final[0].tempat);
    printf("Harga Transportasi: Rp%d\n",final[0].transport);
    printf("Harga Penginapan: Rp%d\n",final[0].inap);
    printf("Total Biaya: Rp%d\n",final[0].total);
}