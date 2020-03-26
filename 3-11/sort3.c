#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j,temp,min;
    scanf("%d",&n);
    int array[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(array[min]> array[j]){
                min = j;
            }

        }
        temp=array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    

    system("pause");
    return 0;
}