#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi UTS (sblbl20) Si Blebek Blebek dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n1[3],i,j,n=0;
    char method,value[20];

    //Condition Input
    scanf(" %c",&method);
    scanf("%s",value);
    for(i=0;i<3;i++){
        scanf("%d",&n1[i]);
        for(j=0;j<n1[i];j++){
            scanf("%li %li %s %s",&arr[i][j].berat,&arr[i][j].harga,arr[i][j].merk,arr[i][j].jenis);
            // arr[i][j].murah = ((double)arr[i][j].harga / (double)arr[i][j].berat)*1000000000;
        }
    }

    //Load to final array according to condition of value
    n = load(n1,value);
    
    // Condition Check then Sorting
    if(method=='s'){
        selection(n);
    }else if(method=='i'){
        insertion(n);
    }else if(method=='b'){
        bubble(n);
    }else if(method=='q'){
        quick(0,n-1);
    }
    
    //Sorted Data Print
    printSort(n);

    system("pause");
    return 0;
}

