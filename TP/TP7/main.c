#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP7 (UNIQ20) Angka Unique 2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,n,count=0;

    //Array initialization
    scanf("%d",&n);
    int arr[n],final[n];

    //Array Input
    scan(n,arr);

    //Search unique number
    search(n,&count,arr,final);

    //Print unique number
    print(count,final);

    system("pause");
    return 0;
}