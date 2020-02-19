#include<stdio.h>
#include<stdlib.h>
int fpb(int a,int b){
    
    if((b==0)){
        return a;
    }else{
        int temp = a % b;
        printf("%d %d %d\n",a,b,temp);
        return fpb(b,temp);
    }
}
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int hasil = fpb(x,y);
    printf("Hasil FPB : %d\n",hasil);

    system("pause");
    return 0;
}