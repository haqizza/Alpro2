#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP5 (SDSF19) Selamat Datang di Sekolah Favorit dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void scan(int n){//Student and Scores Input
    int i;
    for(i=0;i<n;i++){
        scanf("%s",arr[i].nama);//Name scan
        //Scores scan
        scanf("%f",&arr[i].mat);
        scanf("%f",&arr[i].sain);
        scanf("%f",&arr[i].en);
        scanf("%f",&arr[i].in);
        //Classes determine 
        if((arr[i].mat>80)&&(arr[i].sain>80)&&(arr[i].en>80)&&(arr[i].in>80)){
            arr[i].kelas = 'a';
        }else if((arr[i].mat>=70)&&(arr[i].sain>=70)){
            arr[i].kelas = 'b';
        }else if((arr[i].mat>=50)&&(arr[i].sain>=50)&&(arr[i].en>=50)&&(arr[i].in>=50)){
            arr[i].kelas = 'c';
        }else{
            arr[i].kelas = 'x';
        }
    }
}
void checkPos(int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i].kelas == 'a'){
            na=i;
        }else if(arr[i].kelas == 'b'){
            nb=i;
        }else if(arr[i].kelas == 'c'){
            nc=i;
        }
    }
}
void bubble2(int n,int i1,int ns){
    int i,move;
    float x,y;
    do{
        move=0;
        for(i=i1;i<ns;i++){
            x = arr[i].mat+arr[i].sain+arr[i].en+arr[i].in;
            y = arr[i+1].mat+arr[i+1].sain+arr[i+1].en+arr[i+1].in;
            if(y>x){
                strcpy(temp.nama,arr[i].nama);
                temp.kelas = arr[i].kelas;
                temp.mat = arr[i].mat;
                temp.sain = arr[i].sain;
                temp.en = arr[i].en;
                temp.in = arr[i].in;

                strcpy(arr[i].nama,arr[i+1].nama);
                arr[i].kelas = arr[i].kelas;
                arr[i].mat = arr[i+1].mat;
                arr[i].sain = arr[i+1].sain;
                arr[i].en = arr[i+1].en;
                arr[i].in = arr[i+1].in;

                strcpy(arr[i+1].nama,temp.nama);
                arr[i+1].kelas = temp.kelas;
                arr[i+1].mat = temp.mat;
                arr[i+1].sain = temp.sain;
                arr[i+1].en = temp.en;
                arr[i+1].in = temp.in;
                move++;
            }
        }
    }while(move!=0);
}
void bubble(int n){
    int i,j,move;
    //1. Grouping
    do{
        move = 0;
        for(i=0;i<n-1;i++){
            
            if(arr[i].kelas>arr[i+1].kelas){
                
                strcpy(temp.nama,arr[i].nama);
                temp.kelas = arr[i].kelas;
                temp.mat = arr[i].mat;
                temp.sain = arr[i].sain;
                temp.en = arr[i].en;
                temp.in = arr[i].in;

                strcpy(arr[i].nama,arr[i+1].nama);
                arr[i].kelas = arr[i+1].kelas;
                arr[i].mat = arr[i+1].mat;
                arr[i].sain = arr[i+1].sain;
                arr[i].en = arr[i+1].en;
                arr[i].in = arr[i+1].in;

                strcpy(arr[i+1].nama,temp.nama);
                arr[i+1].kelas = temp.kelas;
                arr[i+1].mat = temp.mat;
                arr[i+1].sain = temp.sain;
                arr[i+1].en = temp.en;
                arr[i+1].in = temp.in;
                move++;
            }
        }
    }while(move!=0);
    checkPos(n);
    
    // printf("%d %d d",na,nb,nc);
    //2. Sorting according to class
    bubble2(n,0,na);//A class sort
    bubble2(n,na+1,nb);//B class sort
    bubble2(n,nb+1,nc);//C class sort
    bubble2(n,nc+1,n);//no-class sort
}
void quick(int left,int right,char par){
    int i=left,j=right;
    do{
        if(par == 'c'){
            while((arr[i].kelas<arr[right].kelas)&&(i<=j)){
                i++;
            }
            while((arr[j].kelas>arr[left].kelas)&&(i<=j)){
                j--;
            }
        }else if(par == 's'){
            while(((arr[i].mat+arr[i].sain+arr[i].en+arr[i].in)>(arr[right].mat+arr[right].sain+arr[right].en+arr[right].in))&&(i<=j)){
                i++;
            }
            while(((arr[j].mat+arr[j].sain+arr[j].en+arr[j].in)<(arr[left].mat+arr[left].sain+arr[left].en+arr[left].in))&&(i<=j)){
                j--;
            }
        }

        if(i<j){
            strcpy(temp.nama,arr[i].nama);
            temp.kelas = arr[i].kelas;
            temp.mat = arr[i].mat;
            temp.sain = arr[i].sain;
            temp.en = arr[i].en;
            temp.in = arr[i].in;

            strcpy(arr[i].nama,arr[j].nama);
            arr[i].kelas = arr[j].kelas;
            arr[i].mat = arr[j].mat;
            arr[i].sain = arr[j].sain;
            arr[i].en = arr[j].en;
            arr[i].in = arr[j].in;

            strcpy(arr[j].nama,temp.nama);
            arr[j].kelas = temp.kelas;
            arr[j].mat = temp.mat;
            arr[j].sain = temp.sain;
            arr[j].en = temp.en;
            arr[j].in = temp.in;

            i++;
            j--;
        }
    }while(i<j);
    
    if(left<j){
        quick(left,j,par);
    }
    if(i<right){
        quick(i,right,par);
    }
}
void print(int n,int a,int b,int c){
    int i,j,x=1;
    //Print according to format
    printf("Kelas A:\n");//Print class
    for(i=0;i<n;i++){
        if((arr[i].kelas == 'a')&&(x<=a)){
            printf("No Absen: %d Nama: %s\n",x,arr[i].nama);
            x++;
        }else if((arr[i].kelas == 'a')&&(x>a)){
            arr[i].kelas = 'x';
        }
    }
    if(x==1){
        printf("Tidak Ada Data.\n");
    }
    x=1;
    printf("\nKelas B:\n");//Print class
    for(i=0;i<n;i++){
        if((arr[i].kelas == 'b')&&(x<=b)){
            printf("No Absen: %d Nama: %s\n",x,arr[i].nama);
            x++;
        }else if((arr[i].kelas == 'b')&&(x>b)){
            arr[i].kelas = 'x';
        }
    }
    if(x==1){
        printf("Tidak Ada Data.\n");
    }
    x=1;
    printf("\nKelas C:\n");//Print class
    for(i=0;i<n;i++){
        if((arr[i].kelas == 'c')&&(x<=c)){
            printf("No Absen: %d Nama: %s\n",x,arr[i].nama);
            x++;
        }else if((arr[i].kelas == 'c')&&(x>c)){
            arr[i].kelas = 'x';
        }
    }
    
    if(x==1){
        printf("Tidak Ada Data.\n");
    }
    x=1;
    printf("\nSiswa Yang Tidak Lulus:\n");//Print class
    for(i=0;i<n;i++){
        if((arr[i].kelas == 'x')){
            printf("No Absen: %d Nama: %s\n",x,arr[i].nama);
            x++;
        }
    }
    if(x==1){
        printf("Tidak Ada Data.\n");
    }
}