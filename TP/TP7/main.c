#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP7 (UNIQ20) Angka Unique 2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,n;    
    
    //Array initialization
    scanf("%d",&n);
    int arr[n],final[n];

    //Array scan
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);        
    }

    //Search unique number
    search(arr,n);

    //Print unique number
    print(arr,n);

    system("pause");
    return 0;
}