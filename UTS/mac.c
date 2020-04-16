#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi UTS (sblbl20) Si Blebek Blebek dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//Selection Sort
int load(int n1[],char value[]){
    int i,j,m=0;
    for(i=0;i<3;i++){
        for(j=0;j<n1[i];j++){
            if(strcmp(arr[i][j].jenis,value)==0){
                final[m].berat = arr[i][j].berat;
                final[m].harga = arr[i][j].harga;
                strcpy(final[m].merk,arr[i][j].merk);
                strcpy(final[m].jenis,arr[i][j].jenis);
                m++;
            }
        }
    }
    return m;
}
void moveline(int i,int j){
    temp.berat = final[i].berat;
    temp.harga = final[i].harga;
    strcpy(temp.merk,final[i].merk);
    strcpy(temp.jenis,final[i].jenis);

    final[i].berat = final[j].berat;
    final[i].harga = final[j].harga;
    strcpy(final[i].merk,final[j].merk);
    strcpy(final[i].jenis,final[j].jenis);

    final[j].berat = temp.berat;
    final[j].harga = temp.harga;
    strcpy(final[j].merk,temp.merk);
    strcpy(final[j].jenis,temp.jenis);
}
void bubble(int n){
    int i,move;
    do{
        move = 0;
        for(i=0;i<n-1;i++){
            if((final[i].harga*final[i+1].berat)>(final[i+1].harga*final[i].berat)){
                moveline(i,i+1);
                move++;
            }
        }
    }while(move!=0);
    
}
void quick(int left,int right){
    int i=left,j=right;
    do{
        while(((final[i].harga*final[right].berat)<(final[right].harga*final[i].berat))&&(i<=j)){
            i++;
        }
        while(((final[j].harga*final[left].berat)>(final[left].harga*final[j].berat))&&(i<=j)){
            j--;
        }

        if(i<j){
            moveline(i,j);
            i++;
            j--;
        }
    }while(i<j);
    
    if(left<j){
        quick(left,j);
    }
    if(i<right){
        quick(i,right);
    }
}
void selection(int n){
    int i,j,min;

    for(i=0;i<n;i++){
        min = i;//Assign minimum value
        for(j=i+1;j<n;j++){
            if((final[min].harga*final[j].berat)>(final[j].harga*final[min].berat)){//If temporary minimum value bigger, set smaller value as minimum value
                min = j;
            }
        }
        // Switch array datas
        moveline(i,min);
    }
}
void insertion(int n){
    int i,j;
    
    for(i=1;i<n;i++){
        //Set temp data
        temp.berat = final[i].berat;
        temp.harga = final[i].harga;
        strcpy(temp.merk, final[i].merk);
        strcpy(temp.jenis, final[i].jenis);
        j=i-1;//Set j

        while(((temp.harga*final[j].berat)<(final[j].harga*temp.berat))&&(j>=0)){//Compare values
        
            final[j+1].berat = final[j].berat;
            final[j+1].harga = final[j].harga;
            strcpy(final[j+1].merk,final[j].merk);
            strcpy(final[j+1].jenis,final[j].jenis);
            j-=1;
        }
        //Assign temp to array
        final[j+1].berat = temp.berat;
        final[j+1].harga = temp.harga;
        strcpy(final[j+1].merk,temp.merk);
        strcpy(final[j+1].jenis,temp.jenis);
    }
}
void printSort(int n){
    int i;
    //Print according to format
    for(i=0;i<n;++i){
        printf("%d %d %s %s\n",final[i].berat,final[i].harga,final[i].merk,final[i].jenis);
    }
}
