#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char nama[50];
    char nim[50];
    char nilai;
}siswa;
int main(){
    siswa kelas1[2][2];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Masukan NIM siswa: ");
            scanf("%s", kelas1[i][j].nim);
            printf("Masukan nama siswa: ");
            scanf("%s", kelas1[i][j].nama);
            printf("Masukan nilai siswa: ");
            scanf(" %c", &kelas1[i][j].nilai);
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("NIM siswa: %s\n",kelas1[i][j].nim);
            printf("Nama siswa: %s\n",kelas1[i][j].nama);
            printf("Nilai siswa: %c\n",kelas1[i][j].nilai);
            printf("\n");
        }
    }

    system("pause");
    return 0;
}