#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP5 (SDSF19) Selamat Datang di Sekolah Favorit dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,a,b,c;
    char method[10];

    scanf("%s",method);//Method scan
    scanf("%d %d %d",&a,&b,&c);//Class quote
    scanf("%d",&n);//Array legth

    
    
    //Student and Scores Input
    scan(n);
    
    //Method Check then Sorting
    if(strcmp(method,"bubble")==0){
        bubble(n);
    }else if(strcmp(method,"quick")==0){
        quick(0,n-1,'c');
        checkPos(n);
        quick(0,na,'s');//A class sort
        quick(na+1,nb,'s');//B class sort
        quick(nb+1,nc,'s');//C class sort
        quick(nc+1,n-1,'s');//no-class sort
    }
    
    //Sorted Data Print
    print(n,a,b,c);

    system("pause");
    return 0;
}