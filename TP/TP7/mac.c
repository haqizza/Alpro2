#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP7 (UNIQ20) Angka Unique 2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void scan(int n,int *arr){
    int i;

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);  
    }
}
void search(int n,int *count,int arr[],int *final){
    int i,j,val,m=0;
    for(i=0;i<n;i++){
        val=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                val++;
                
            }
        }
        if(val==1){
            final[m]=arr[i];
            m++;
            // printf("%d",m);
        }
    }
    *count=m;
}
void print(int n,int final[]){
    int i;
    //Print according to format
    for(i=0;i<n;i++){
        printf("%d\n",final[i]);
    }
}