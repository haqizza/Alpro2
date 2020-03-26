#include<stdio.h>
#include<stdlib.h>
void scan1(int n,int* array){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}
void scan2(int n,int m,pecahan (*arr)[m]){//Scan Array
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d %d",&arr[i][j].pem,&arr[i][j].pen);
        }
    }
}
int sort(int n,int* array){
    int i,j,sisip;
    for(i=1;i<n;i++){
        sisip = array[i];
        j = i - 1;

        while((sisip>array[j])&&(j>=0)){
            //Jika data lebih besar dari sisip, maka data digeser ke belakang
            array[j+1] = array[j];
            j -= 1;
        }
        //Menempatkan sisip pada array
        array[j+1] = sisip;
    }
}
void banding(int n,int m,pecahan (*ar1)[m]){//Membandingkan pecahan dan assigning jika sesuai syarat
    int i,j;
    float a,b;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a = (float)ar1[i][j].pem/(float)ar1[i][j].pen;//Menghitung pecahan, assigning ke a
            b = (float)ar2[i][j].pem/(float)ar2[i][j].pen;//Menghitung pecahan, assigning ke b
            if(a<b){//Membandingkan nilai a dan b
                ar2[i][j].pem = ar1[i][j].pem;//Memasukkan pembilang array besar ke kecil
                ar2[i][j].pen = ar1[i][j].pen;//Memasukkan penyebut array besar ke kecil
            }
        }   
    }
}
int print1(int n,int* array){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
void print2(int n,int m,pecahan (*ar2)[m]){//Print Array Kecil
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d/%d\n",ar2[i][j].pem,ar2[i][j].pen);
        }
    }
}
int main(){
    int n,m,i,j;
    //=========================== Sorting Bigger to Smaller
    scanf("%d",&n);
    int array[n];
    scan1(n,array);
    sort(n,array);
    print1(n,array);
    //============================ Sorting Fragment
    // scanf("%d",&n);//Scan baris
    // scanf("%d",&m);//Scan kolom
    pecahan ar1[n][m];

    // banding(n,m,ar1);//Membandingkan pecahan
    
    // print(n,m,ar2);


    system("pause");
    return 0;
}