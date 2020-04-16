#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (MBL19) Maman Berlibur dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    
    //Data initialization
    strcpy(arr[0].tempat,"Batununggal"); arr[0].jarak = 7.3*2;    arr[0].waktu = 21*2;
    strcpy(arr[1].tempat,"Sarijadi");    arr[1].jarak = 16.6*2;   arr[1].waktu = 34*2;
    strcpy(arr[2].tempat,"Gedebage");    arr[2].jarak = 8.3*2;    arr[2].waktu = 20*2;
    strcpy(arr[3].tempat,"Setiabudhi");  arr[3].jarak = 18.7*2;   arr[3].waktu = 39*2;
    strcpy(arr[4].tempat,"Kiaracondong");arr[4].jarak = 6.7*2;    arr[4].waktu = 19*2;
    strcpy(arr[5].tempat,"Rancasari");   arr[5].jarak = 5.0*2;    arr[5].waktu = 15*2;
    strcpy(arr[6].tempat,"Regol");       arr[6].jarak = 6.3*2;    arr[6].waktu = 14*2;
    strcpy(arr[7].tempat,"Ujungberung"); arr[7].jarak = 12.5*2;   arr[7].waktu = 29*2;
    strcpy(arr[8].tempat,"Caringin");    arr[8].jarak = 18.4*2;   arr[8].waktu = 26*2;
    strcpy(arr[9].tempat,"Dago");        arr[9].jarak = 13.2*2;   arr[9].waktu = 30*2;
    strcpy(arr[10].tempat,"Mekarmulya"); arr[10].jarak = 10.2*2;  arr[10].waktu = 21*2;
    strcpy(arr[11].tempat,"Cigondewah"); arr[11].jarak = 20.4*2;  arr[11].waktu = 31*2;
    strcpy(arr[12].tempat,"Lengkong");   arr[12].jarak = 5.3*2;   arr[12].waktu = 14*2;

    int n=13,num;
    char method[15],order[15],value[10];
    
    //Condition Input
    scanf("%s",method);
    scanf("%s",order);
    scanf("%s",value);
    scanf("%d",&num);
    
    // Condition Check then Sorting
    if(strcmp(method,"Selection")==0){
        if(strcmp(order,"Ascending")==0){
            selection(n,'a',value);
        }else if(strcmp(order,"Descending")==0){
            selection(n,'d',value);
        }
    }else if(strcmp(method,"Insertion")==0){
        if(strcmp(order,"Ascending")==0){
            insertion(n,'a',value);
        }else if(strcmp(order,"Descending")==0){
            insertion(n,'d',value);
        }
    }
    
    //Sorted Data Print
    printSort(n);

    //Send Print
    printSend(n,num,value);

    system("pause");
    return 0;
}