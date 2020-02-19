#include<stdio.h>
#include<stdlib.h>
int power(int a,int b){
    int hasil;

    if((b==0)){
        return 1;
    }else{
        hasil = a*power(a,b-1);
        
        return hasil;
    }
}
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int hasil = power(x,y);
    printf("Hasil Pangkat : %d\n",hasil);

    system("pause");
    return 0;
}