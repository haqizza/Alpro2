#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Evaluasi (WFHYA220) WFH ya Eval! 1C2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,j,n,m;
    char method[15];
    
    //Arrays scan
    scanf("%d",&n);
    char arr[n][20];
    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    scanf("%d",&m);
    char arr2[m][20];
    for(i=0;i<m;i++){
        scanf("%s",arr2[i]);
    }
    scanf("%s",method);
    char final[n+m][20];

    //Load to final array
    load(n,m,arr,arr2,final);
    
    // Condition Check then Sorting
    if(strcmp(method,"Select")==0){
        selection(n+m,final);
    }else if(strcmp(method,"Insert")==0){
        insertion(n+m,final);
    }else if(strcmp(method,"Bubble")==0){
        bubble(n+m,final);
    }else if(strcmp(method,"Quick")==0){
        quick(final,0,n+m-1);
    }
    
    //Sorted Data Print
    printSort(n+m,final);

    system("pause");
    return 0;
}