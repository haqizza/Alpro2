#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int prime(int counter){
    int x = counter-1, i = 0;//x diisi counter-1 untuk memulai perhitungan
    
    //Angka yang di cek di mod dengan setiap angka antara dia dengan 1
    while(x > 1){//jika x sudah 1, loop berhenti
        if(counter % x == 0){//Jika modnya 0
            i++;//Ditandai
            break;//Lalu keluar
        }
        x--;
    }
    if(i>0){//Jika bukan prime num
        return counter+1;//angka yang dihitung daitambah 1 untuk perhitungan berikutnya
    }else{//Jika prime num
        return counter;//Angka direturn
    }
}
int primeN(int counter){
    int x = 0;
    
    x = prime(counter);//Prime num dicek
    if(x > counter){//Jika angka yang tadi dikirim bertambah dari semula, berarti ia bukan prime
        return primeN(counter+1);//Angka dihitung ulang
    }else{//Jika prime
        return counter;//Ia dikirim
    }    
}
void hitung(int n,int *prime){
    int i;

    prime[0] = 2;//prime num pertama
    for(i=1;i<n;i++){
        prime[i] = primeN(prime[i-1]+1);//prime num cari dengan patokan awal prim num sebelumnya, kemudian di assign
    }
}
void print(int n,int prime[]){
    int i,j;
    //Print hasil
    for(i=0;i<n;i++){
            printf("%d %d\n", i+1, (i+1) * prime[i]);//Print nomor murid dan hasil nomor kali bilangan prima ke-nomor
    }
}