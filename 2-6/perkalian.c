#include<stdio.h>
#include<stdlib.h>
int main(){
    int matrix1[3][2],matrix2[2][3],hasil[3][3],baris,kolom,kali;

    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<2;kolom++){
            printf("masukkan angka:\n");
            scanf("%d", &matrix1[baris][kolom]);
            printf("\n");
        }
    }

    for(baris=0;baris<2;baris++){
        for(kolom=0;kolom<3;kolom++){
            printf("masukkan angka:\n");
            scanf("%d", &matrix2[baris][kolom]);
            printf("\n");
        }
    }
    
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            hasil[baris][kolom]=0;
            
            for(kali=0;kali<2;kali++){
                hasil[baris][kolom] = hasil[baris][kolom] + (matrix1[baris][kali] * matrix2[kali][kolom]);
            }
        }
    }
    
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<2;kolom++){
            printf("%d ",matrix1[baris][kolom]);
        }
            printf("\n");
    }

    for(baris=0;baris<2;baris++){
        for(kolom=0;kolom<3;kolom++){
            printf("%d ",matrix2[baris][kolom]);
        }
            printf("\n");
    }

    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            printf("%d ",hasil[baris][kolom]);
        }
            printf("\n");
    }

    system("pause");
    return 0;
}