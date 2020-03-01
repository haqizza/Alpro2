#include<stdio.h>
#include<stdlib.h>
void alfabet(int i){
    printf(" %c",i);
    if(i>'a'){
        alfabet(i-1);
    }
}
void fib(int* arr,int n,int i){
    int a;
    arr[i] = 0;
    
    if(i==0){
        arr[i] = 0;
        fib(arr,n,i+1);
    }else if((i==1)||(i==2)){
        arr[i] = 1;
        fib(arr,n,i+1);
    }else{
        if(i<n){
            if(i<4){
                arr[i] = arr[i-1] + arr[i-2];
            }else if((arr[i-4]%2==0)&&(arr[i-4]>0)){
                arr[i] = arr[i-1] + arr[i-4];
            }else{
                arr[i] = arr[i-1] + arr[i-2];
            }
            
            fib(arr,n,i+1);
        }
    }

}
int main(){
    int arr[50],i,n;
    
    scanf("%d",&n);

    // alfabet('z');
    
    fib(arr,n,0);
    
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    system("pause");
    return 0;
}