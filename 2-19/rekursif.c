#include<stdio.h>
#include<stdlib.h>
void tulis(int n){
    int counter=n;

    if(counter>0){
        printf("counter value in recursion: %d\n",counter);
        counter-=1;
        tulis(counter);
    }
}
int main(){
    tulis(10);

    system("pause");
    return 0;
}