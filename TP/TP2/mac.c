#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP2 (MaBuk219) Matriks Bungkusan Makanan dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void scan(int n,int m,list (*arr)[m]){
    int i,j;
    //Scan nama
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%s",arr[i][j].nama);
        }
    }
    //Scan makanan1
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%s",arr[i][j].m1);
        }
    }
    //Scan makanan2
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%s",arr[i][j].m2);
        }
    }
}
void scanSwitch(int n,int m,list (*arr)[m]){
    int i,j,x,a1,a2,b1,b2;
    char c;
    list temp[2];//Temporary 
    //Inf. Loop
    while(1){
        c='1';//Assign other than '-' to c
        i=0;//Assign 0 to i

        //Scan First People Name
        while((c!='-')&&(c!='.')){
            scanf(" %c",&c);
            temp[0].nama[i] = c;
            i++;
        }
        
        if(c=='.'){
            temp[0].nama[i] = '\0';
        }else{//Delete '-' from scanned string
            temp[0].nama[i-1] = '\0';
        }
        //If input 'stop.'
        if(strcmp(temp[0].nama,"stop.")==0){
            break;//Loop will end
        }
        c='1';//Assign other than '-' to c
        i=0;//Assign 0 to i

        //Scan Second People Name
        while(c!='-'){
            scanf(" %c",&c);
            temp[1].nama[i] = c;
            i++;
        }
        temp[1].nama[i-1] = '\0';

        //Scan food number
        scanf("%d",&x);

        //Scan name in the array
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(strcmp(temp[0].nama,arr[i][j].nama)==0){
                    a1 = i;
                    b1 = j;
                }
                if(strcmp(temp[1].nama,arr[i][j].nama)==0){
                    a2 = i;
                    b2 = j;
                }
            }
        }
        //Changing the value
        if(x==1){
            strcpy(temp[0].m1,arr[a1][b1].m1);
            strcpy(arr[a1][b1].m1,arr[a2][b2].m1);
            strcpy(arr[a2][b2].m1,temp[0].m1);
        }else if(x==2){
            strcpy(temp[1].m2,arr[a1][b1].m2);
            strcpy(arr[a1][b1].m2,arr[a2][b2].m2);
            strcpy(arr[a2][b2].m2,temp[1].m2);
        }
    }
}
void print(int n,int m,list (*arr)[m]){
    int i,j;
    //Print according to format
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j!=0){
                printf(" ");
            }
            printf("%s->%s,%s",arr[i][j].nama,arr[i][j].m1,arr[i][j].m2);
        }
        printf("\n");
    }
}
void printTest(int n,int m,list (*arr)[m]){//Print
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%s ",arr[i][j].nama);
        }
        printf("\n");
    }
    //Print makanan1
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%s ",arr[i][j].m1);
        }
        printf("\n");
    }
    //Print makanan2
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%s ",arr[i][j].m2);
        }
        printf("\n");
    }
}