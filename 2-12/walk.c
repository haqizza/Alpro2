#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP1 (MAMEN19) MAtriks Mudah Emang Nice dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void wait(float x){
    time_t start;
    time_t current;
    time(&start);
    do
        time(&current);

    while(difftime(current,start) < x);
}
int main(){
    char arr[6][6];

    int i,j,x=-1,y=-1,jalan=1;
    
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            arr[i][j] = '-';
        }
    }

    while(1){
        system("cls");

        if((x>=0)&&(x<6)){
            arr[x][y] = '-';
        }
        if((x==6)&&(y==6)){
            jalan = -1;
            x -= 1;
            y -= 1;
        }else if((x==-1)&&(y==-1)){
            jalan = 1;
            x += 1;
            y += 1;
        }else if(jalan == 1){
            x += 1;
            y += 1;
        }else{
            x -= 1;
            y -= 1;
        }

        if((x>=0)&&(y<6)){
           arr[x][y] = 'B';
        }

        for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                if(arr[i][j] == '-'){
                    printf("    ");
                }else{
                    printf(" %c ",arr[i][j]);
                }
                printf("\n");
            }
        }
        wait(1000);
    }
    
    return 0;
}