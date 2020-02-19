#include<stdio.h>
#include<stdlib.h>
int main(){
    int matrix1[3][2],matrix2[3][2],hasil[3][2],baris,kolom;

    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<2;kolom++){
            printf("masukkan angka:\n");
            scanf("%d", &matrix1[baris][kolom]);
            printf("\n");
        }
    }

    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<2;kolom++){
            printf("masukkan angka:\n");
            scanf("%d", &matrix2[baris][kolom]);
            printf("\n");
        }
    }
    
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<2;kolom++){
            hasil[baris][kolom] = matrix1[baris][kolom] + matrix2[baris][kolom];
        }
    }
    
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<2;kolom++){
            printf("%d   %d   %d",matrix1[baris][kolom],matrix2[baris][kolom],hasil[baris][kolom]);
            printf("\n");
        }
    }

    system("pause");
    return 0;
}