#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Latihan Alpro 2 dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
int main(){
    int i,j;
    int cases;
    int langkah;
    char step[15];
    stepCounter = 0;
    int count;

    scanf("%d",&cases);
    
    for(i = 0;i < cases;i++){
        scanf("%d %d",&cepot.x,&cepot.y);
        scanf("%d",&langkah);

        for(j = 0;j<langkah;j++){
            scanf("%s %d",step,&count);

            //Hitung perpindahan
            if(strcmp(step,"horizontal") == 0){
                hitung('h',langkah,count);
            }else if(strcmp(step,"-horizontal") == 0){
                hitung('H',langkah,count);
            }else if(strcmp(step,"vertikal") == 0){
                hitung('v',langkah,count);
            }else if(strcmp(step,"-vertikal") == 0){
                hitung('V',langkah,count);
            }else if(strcmp(step,"miring") == 0){
                hitung('m',langkah,count);
            }else if(strcmp(step,"-miring") == 0){
                hitung('M',langkah,count);
            }
        }
        stepCounter += 1;
    }
    
    print(cases);//Print hasil

    system("pause");
    return 0;
}