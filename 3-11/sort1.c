#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j,sisip;
    scanf("%d",&n);
    int array[n];

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    for(i=1;i<n;i++){
        sisip = array[i];
        j = i - 1;

        while((sisip<array[j])&&(j>=0)){
            //Jika data lebih kecil dari sisip, maka data digeser ke belakang
            array[j+1] = array[j];
            j -= 1;
        }
        //Menempatkan sisip pada array
        array[j+1] = sisip;
    }

    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    

    system("pause");
    return 0;
}