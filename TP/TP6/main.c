#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (MBL19) Maman Berlibur dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n1[3],i,j;
    char method[15],order[15],value[25];
    
    
    //Condition Input
    n=0;
    for(i=0;i<3;i++){
        scanf("%s",nama[i]);
        scanf("%d",&n1[i]);
        for(j=0;j<n1[i];j++){
            scanf("%s",arr[i][j].tempat);
            scanf("%d",&arr[i][j].transport);
            scanf("%d",&arr[i][j].inap);
            arr[i][j].total = arr[i][j].transport + arr[i][j].inap;
        }
        n+=n1[i];
    }
    scanf("%s",value);
    scanf("%s",method);
    scanf("%s",order);

    //Load to final array
    load(n1);

    // Condition Check then Sorting
    if(strcmp(method,"Selection")==0){
        if(strcmp(order,"Asc")==0){
            selection(n1,'a',value);
        }else if(strcmp(order,"Desc")==0){
            selection(n1,'d',value);
        }
    }else if(strcmp(method,"Insertion")==0){
        if(strcmp(order,"Asc")==0){
            insertion(n1,'a',value);
        }else if(strcmp(order,"Desc")==0){
            insertion(n1,'d',value);
        }
    }else if(strcmp(method,"BubbleSort")==0){
        if(strcmp(order,"Asc")==0){
            bubble(n1,'a',value);
        }else if(strcmp(order,"Desc")==0){
            bubble(n1,'d',value);
        }
    }else if(strcmp(method,"QuickSort")==0){
        if(strcmp(order,"Asc")==0){
            quick(0,n-1,'a',value);
        }else if(strcmp(order,"Desc")==0){
            quick(0,n-1,'d',value);
        }
    }
    
    //Sorted Data Print
    printSort(n1);

    //Send Print
    printSend(n1);

    system("pause");
    return 0;
}