#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int n;
    char pita[1000];
    char pita2[100][100];
    
    scanf(" %999[^\n]s",pita);
    startKata(pita);

    n = pisah(pita,pita2);//Menyalin setiap kata dari pita ke array; n adalah jumlah kata yang ditemukan
    
    int jumlahA[n];//Variable ini untuk menyimpan  banyak 'a' dalam setiap kata di pita2

    hitungA(n,pita2,jumlahA);//Menghitung banyak 'a' di setiap kata
    urutkan(n,pita2,jumlahA);//Mengurutkan dari yang paling banyak 'a'
    print(n,pita2,jumlahA);//mencetak aray pita2

    system("pause");
    return 0;
}