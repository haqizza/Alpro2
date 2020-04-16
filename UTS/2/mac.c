#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (MBL19) Maman Berlibur dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//Selection Sort
void selection(int n,char o,char value[]){
    int i,j,min,max,x;
    x = strcmp(value,"Waktu");
    if(x==0){//Sort by Time
        if(o=='a'){//Sort Ascending
            for(i=0;i<n;i++){
                min = i;//Assign minimum value
                for(j=i+1;j<n;j++){
                    if(arr[min].waktu>arr[j].waktu){//If temporary minimum value bigger, set smaller value as minimum value
                        min = j;
                    }
                }
                // Switch array datas
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[min].tempat);
                arr[i].jarak = arr[min].jarak;
                arr[i].waktu = arr[min].waktu;
                
                strcpy(arr[min].tempat,temp.tempat);
                arr[min].jarak = temp.jarak;
                arr[min].waktu = temp.waktu;
            }
        }else if(o=='d'){//Sort Descending
            for(i=0;i<n;i++){
                max = i;//Assign maximum value
                for(j=i+1;j<n;j++){
                    if(arr[max].waktu<arr[j].waktu){//If temporary maximum value smaller, set smaller value as maximum value
                        max = j;
                    }
                }
                // Switch array datas
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[max].tempat);
                arr[i].jarak = arr[max].jarak;
                arr[i].waktu = arr[max].waktu;
                
                strcpy(arr[max].tempat,temp.tempat);
                arr[max].jarak = temp.jarak;
                arr[max].waktu = temp.waktu;
            }
        }
    }else if(strcmp(value,"Jarak")==0){//Sort by Distance
        if(o=='a'){//Sort Ascending
            for(i=0;i<n;i++){
                min = i;//Assign minimum value
                for(j=i+1;j<n;j++){
                    if(arr[min].jarak>arr[j].jarak){//If temporary minimum value bigger, set smaller value as minimum value
                        min = j;
                    }
                }
                //Switch array datas
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[min].tempat);
                arr[i].jarak = arr[min].jarak;
                arr[i].waktu = arr[min].waktu;
                
                strcpy(arr[min].tempat,temp.tempat);
                arr[min].jarak = temp.jarak;
                arr[min].waktu = temp.waktu;
            }
        }else if(o=='d'){
            for(i=0;i<n;i++){
                max = i;//Assign maximum value
                for(j=i+1;j<n;j++){
                    if(arr[max].jarak<arr[j].jarak){//If temporary maximum value smaller, set smaller value as maximum value
                        max = j;
                    }
                }
                //Switch array data
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                
                strcpy(arr[i].tempat,arr[max].tempat);
                arr[i].jarak = arr[max].jarak;
                arr[i].waktu = arr[max].waktu;
                
                strcpy(arr[max].tempat,temp.tempat);
                arr[max].jarak = temp.jarak;
                arr[max].waktu = temp.waktu;
            }
        }
    }
}
void insertion(int n,char o,char value[]){
    int i,j;
    if(strcmp(value,"Waktu")==0){//Sort by Time
        if(o=='a'){//Sort Ascending
            for(i=1;i<n;i++){
                //Set temp data
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;//Set j

                while((temp.waktu<arr[j].waktu)&&(j>=0)){//Compare values
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                //Assign temp to array
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }else if(o=='d'){//Sort Descending
            for(i=1;i<n;i++){
                //Set temp data
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;//Set j

                while((temp.waktu>arr[j].waktu)&&(j>=0)){//Compare values
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                //Assign temp to array
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }
    }else if(strcmp(value,"Jarak")==0){//Sort by Distance
        if(o=='a'){//Sort Ascending
            for(i=1;i<n;i++){
                //Set temp data
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;

                while((temp.jarak<arr[j].jarak)&&(j>=0)){//Compare Values
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                //Assign temp to array
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }else if(o=='d'){//Sort Descending
            for(i=1;i<n;i++){
                //Set temp data
                strcpy(temp.tempat,arr[i].tempat);
                temp.jarak = arr[i].jarak;
                temp.waktu = arr[i].waktu;
                j=i-1;

                while((temp.jarak>arr[j].jarak)&&(j>=0)){//Compare Values
                    strcpy(arr[j+1].tempat,arr[j].tempat);
                    arr[j+1].jarak = arr[j].jarak;
                    arr[j+1].waktu = arr[j].waktu;
                    j-=1;
                }
                //Assign temp to array
                strcpy(arr[j+1].tempat,temp.tempat);
                arr[j+1].jarak = temp.jarak;
                arr[j+1].waktu = temp.waktu;
            }
        }
    }
}
void printSort(int n){
    int i,j;
    //Print according to format
    printf("=== Hasil Sorting ===\n");
    for(i=0;i<n;i++){
        printf("%s %.1fkm %dm\n",arr[i].tempat,(arr[i].jarak/2),(arr[i].waktu/2));
    }
}
void printSend(int n,int num,char value[]){
    int i,j,waktu=0,c='A',counter=1;
    float jarak=0;
    //Print according to format
    printf("=== Pengiriman ===\n");
    if(strcmp(value,"Waktu")==0){
        num = num*60;//Change num from hours to minutes
        printf("%c. Hari ke-%d\n",c,counter);//Print day
        for(i=0;i<n;i++){
            waktu += arr[i].waktu;//Add to time counter
            if(waktu>num){//If counter full, set a new day
                c+=1;
                counter+=1;
                printf("%c. Hari ke-%d\n",c,counter);//Print day
                waktu=arr[i].waktu;//Reset time counter
            }
            printf("- %s\n",arr[i].tempat);//Print Address
        }
    }else if(strcmp(value,"Jarak")==0){
        printf("%c. Hari ke-%d\n",c,counter);//Print day
        for(i=0;i<n;i++){
            jarak += arr[i].jarak;//Add to distance counter
            if(jarak>(float)num){//If counter full, set a new day
                c+=1;
                counter+=1;
                printf("%c. Hari ke-%d\n",c,counter);//Print day
                jarak=arr[i].jarak;//Reset distance counter
            }
            printf("- %s\n",arr[i].tempat);//Print Address
            
        }
    }

}