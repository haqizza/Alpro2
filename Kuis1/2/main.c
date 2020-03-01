#include"head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi Kuis 1 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,p,jml,i,arr[100];
    scanf("%d",&n);//Scan Angka yang akan dibagi
    scanf("%d",&p);//Scan jumlah yang tidak akan ditampilkan

    arr[0] = n;//index 0 diisi angka yang akan dibagi
    
    i=1;//Counter dimulai dari 1 karena 0 sudah diisi
    susun(arr,n,i);//Penghitungan; 
    jml = panjang(arr);//Menghitung panjang Array

    print(arr,n,p,jml);//Print hasil

    system("pause");
    return 0;
}