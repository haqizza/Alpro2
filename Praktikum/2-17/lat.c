#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char plat[50];
    char nama[50];
    char jenis[50];
    char merk[50];
}parkiran;
int main(){
    parkiran parkir[3][3];
    char search[50];
    char search1[50];
    int i,j,x,y=1;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Masukan Plat Nomor: ");
            scanf("%s", parkir[i][j].plat);
            printf("Masukan Nama Pemilik: ");
            scanf("%s", parkir[i][j].nama);
            printf("Masukan Jenis Kendaraan: ");
            scanf("%s", parkir[i][j].jenis);
            printf("Masukan Merk Kendaraan: ");
            scanf("%s", parkir[i][j].merk);
        }
    }
    
    printf("1. Merk\n");
    printf("2. Jenis\n");
    printf("Cari Berdasarkan: ");
    scanf("%d", &x);
    if(x==1){
        printf("Merk: ");
        scanf("%s", &search);
        
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
            //    strcpy(search,);
               y = strcmp(search,parkir[i][j].merk);

               if(y==0){
                    printf("=================\n");
                    printf("Plat Nomor: %s\n",parkir[i][j].plat);
                    printf("Nama Pemilik: %s\n",parkir[i][j].nama);
               }
            }
        }
    }else{
        printf("Jenis: ");
        scanf("%s", &search);

         for(i=0;i<3;i++){
            for(j=0;j<3;j++){
               y = strcmp(search,parkir[i][j].jenis);

               if(y==0){
                    printf("=================\n");
                    printf("Plat Nomor: %s\n",parkir[i][j].plat);
                    printf("Nama Pemilik: %s\n",parkir[i][j].nama);
               }
            }
        }
    }
    

    system("pause");
    return 0;
}