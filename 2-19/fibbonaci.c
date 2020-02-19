#include<stdio.h>
#include<stdlib.h>
int fibbonaci(int* arr,int n,int i){//Bottom Up
    if(i==0){
        arr[i] = 0;
        fibbonaci(arr,n,i+1);
    }else if((i==1)||(i==2)){
        arr[i] = 1;
        fibbonaci(arr,n,i+1);
    }else{
        if(i<n){
            arr[i] = arr[i-1] + arr[i-1];
            fibbonaci(arr,n,i+1);
        }
    }
}
int fib2(int* arr,int n){//Top Down
    if(n<2){
        arr[n] = n;
        return n;
    }else{
        arr[n] = fib2(arr,n-1) + fib2(arr,n-2);
        return arr[n];
    }
}
int main(){
    int n;
    printf("Bilangan fibbonaci : ");
    scanf("%d",&n);
    int arr[n];

    fibbonaci(arr,n,0);
    // fib2(arr,n);
    int i = 0;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    system("pause");
    return 0;
}