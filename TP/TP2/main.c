#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP2 (MaBuk219) Matriks Bungkusan Makanan dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,j,k,n,m;
    
    
    //n & m scan and array initialization
    scanf("%d %d",&n,&m);
    list arr[n][m];
    
    //Array scan
    scan(n,m,arr);

    //Switches scan
    scanSwitch(n,m,arr);

    //Print
    print(n,m,arr);

    // printTest(n,m,arr);//Print Test
    

    system("pause");
    return 0;
}