#include<stdio.h>
#include<stdlib.h>
int faktorial(int n){
    printf("n = %d\n",n);

    if((n==0)||(n==1)){
        return 1;
    }else{
        return (n*faktorial(n-1));
    }
}
int sum(int n){
    printf("n = %d\n",n);

    if(n==1){
        return 1;
    }else{
        return (n+sum(n-1));
    }
}
int main(){
    int x;
    scanf("%d",&x);
    int hasil = sum(x);
    // printf("Hasil Faktorial : %d\n",hasil);
    printf("Hasil Faktorial : %d\n",hasil);

    system("pause");
    return 0;
}