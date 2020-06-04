#include "head.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

// ~~~ Mesin Kata ~~~
void startKata(char pita[]){
    indeks = 0;
    incKata(pita);
}
void resetKata(){
    panjangKata = 0;
    cKata[panjangKata] = '\0';
}
void incKata(char pita[]){
    panjangKata = 0;
    
    while(pita[indeks] == ' '){
        indeks++;
    }
    while((pita[indeks] != ' ') && (pita[indeks] != ';')){
        cKata[panjangKata] = pita[indeks];
        indeks++;
        panjangKata++;
    }
    cKata[panjangKata] = '\0';
}
char* getCKata(){
    return cKata;
}
int getPanjangKata(){
    return panjangKata;
}
int EOPKata(char pita[]){
    if(pita[indeks] == ';'){
        return 1;
    }else{
        return 0;
    }
}

// ~~~ File Manipulation ~~~
void readPeserta(int *nPeserta){//Read peserta.dat
    int i=0;

    FILE *dataPeserta;
    dataPeserta = fopen("peserta.dat","r");

    fscanf(dataPeserta,"%s %s %s", peserta[i].id,peserta[i].nama,peserta[i].program);
    
    //Data scan
    while(strcmp(peserta[i-1].id,"####") != 0){
        i++;
        fscanf(dataPeserta,"%s %s %s", peserta[i].id,peserta[i].nama,peserta[i].program);
    }

    fclose(dataPeserta);
    nPeserta[0] = i-1;//Set peserta number(jumlah)
    
    //Copy peserta values to peserta final
    // for(i=0;i<n[0];i++){
    //     strcpy(pesertafinal[i].id,peserta[i].id);
    //     strcpy(pesertafinal[i].nama,peserta[i].nama);
    //     strcpy(pesertafinal[i].program,peserta[i].program);
    // }
}
void readProgram(int *nProgram){//Read program.dat
    int i=0;

    FILE *dataProgram;
    dataProgram = fopen("program.dat","r");
        
    fscanf(dataProgram,"%s %s %s",program[i].id,program[i].namaProgram,program[i].pengajar);

    // Data scan
    while(strcmp(program[i-1].id,"####") != 0){
        i++;
        fscanf(dataProgram,"%s %s %s",program[i].id,program[i].namaProgram,program[i].pengajar);
    }

    nProgram[1] = i-1;//Set program number
    
    fclose(dataProgram);
}
// int search(int n[],char value[20],char par){//Value search
//     int i,hasil=-1;//init hasil with -1 to identify when value not found

//     if(par == 'a'){//Search for Author
//         for(i=0;i<n[1];i++){
//             if(strcmp(value,program[i].id) == 0){//if value same
//                 hasil = i;//assign indeks number to hasil
//                 break;//get out from for
//             }
//         }
//     }
//     if(par = 'g'){//Search for Genre
//         for(i=0;i<n[2];i++){
//             if(strcmp(value,asal[i].id) == 0){
//                 hasil = i;
//                 break;
//             }
//         }
//     }
//     if(par = 't'){//Search for Toko
//         for(i=0;i<n[3];i++){
//             if(strcmp(value,program,peserta[i].program2[i].id) == 0){
//                 hasil = i;
//                 break;
//             }
//         }
//     }
    
//     return hasil;
// }
// void changeValues(int n[]){//Change code value in peserta mentah to name in peserta final
//     int i,j,a,g,t;
    
//     for(i=0;i<n[0];i++){
//         a = search(n,pesertafinal[i].nama,'a');//search nama value then assign to a
//         g = search(n,pesertafinal[i].asal,'g');//search asal value then assign to g
//         t = search(n,pesertafinal[i].program,peserta[i].program2,'t');//search program,peserta[i].program2 value then assign to t

//         if(a == -1){
//             strcpy(pesertafinal[i].nama,"-");//If nama not found, print -
//         }else{
//             strcpy(pesertafinal[i].nama,program[a].nama);//Author name print
//         }
//         if(g == -1){
//             strcpy(pesertafinal[i].asal,"-");//If asal not found, print -
//         }else{
//             strcpy(pesertafinal[i].asal,asal[g].nama);//Genre name print
//         }
//         if(t == -1){
//             strcpy(pesertafinal[i].program,peserta[i].program2,"-");//If program,peserta[i].program2 not found, print -
//         }else{
//             strcpy(pesertafinal[i].program,peserta[i].program2,program,peserta[i].program2[t].nama);//Toko name print
//         }
//     }

// }
// void writeFinal(int n[]){//Write ListBukuFinal.dat
//     int i;

//     FILE *dataPeserta;
//     dataPeserta = fopen("ListBukuFinal.dat","w");

//     // fscanf(dataPeserta,"%s %s %s %s", pesertafinal[i].id,pesertafinal[i].nama,pesertafinal[i].asal,pesertafinal[i].program,peserta[i].program2);
    
//     for(i=0;i<n[0];i++){
//         fprintf(dataPeserta,"%s %s %s %s\n", pesertafinal[i].id,pesertafinal[i].nama,pesertafinal[i].asal,pesertafinal[i].program,peserta[i].program2);
//     }

//     fprintf(dataPeserta,"#### #### #### ####");

//     fclose(dataPeserta);
// }
// void border(int longer[]){//Print border
//     int i,j;
//     printf("+");//Print edge
//     for(i=0;i<=3;i++){
//         if(i>0){//Print record divider
//             printf("+");
//         }
//         for(j=0;j<longer[i];j++){//Print line
//             printf("-");
//         }
//     }
//     printf("+\n");//Print edge
// }
// void spacePrint(int space,int longer,int value){//Space print
//     int j;
//     space = longer - value;//minus longer with record value length, then assign to space
//     for(j=0;j<space;j++){//Printing space as long as space
//         printf(" ");
//     }
// }
// void printTable(int n[]){//Show peserta final data
//     int i,j,x,space[4],longer[4]={0,0,0,0};
//     char top[4][20] = {"Judul","Author","Genre","Toko"};//init for title fields

//     //Counting longest number of each  field
//     for(i=0;i<n[0];i++){
//         if(strlen(pesertafinal[i].id)>longer[0]){//If detected value longer
//             longer[0] = strlen(pesertafinal[i].id);//Assign value to longer(var)
//         }
//         if(strlen(pesertafinal[i].nama)>longer[1]){
//             longer[1] = strlen(pesertafinal[i].nama);
//         }
//         if(strlen(pesertafinal[i].asal)>longer[2]){
//             longer[2] = strlen(pesertafinal[i].asal);
//         }
//         if(strlen(pesertafinal[i].program,peserta[i].program2)>longer[3]){
//             longer[3] = strlen(pesertafinal[i].program,peserta[i].program2);
//         }
//         if(strlen(top[i])>longer[4]){
//             longer[4] = strlen(top[i]);
//         }
//     }

//     border(longer);//Border print

//     //Printing header/fields title
//     for(i=0;i<=3;i++){
//         printf("|%s",top[i]);
//         spacePrint(space[i],longer[i],strlen(top[i]));
//     }
//     printf("|\n");

//     border(longer);//Border print

//     //Print each field values
//     for(i=0;i<n[0];i++){
//         printf("|%s",pesertafinal[i].id);//record value print
//         spacePrint(space[0],longer[0],strlen(pesertafinal[i].id));//Space print
        
//         printf("|%s",pesertafinal[i].nama);
//         spacePrint(space[1],longer[1],strlen(pesertafinal[i].nama));

//         printf("|%s",pesertafinal[i].asal);
//         spacePrint(space[2],longer[2],strlen(pesertafinal[i].asal));

//         printf("|%s",pesertafinal[i].program,peserta[i].program2);
//         spacePrint(space[3],longer[3],strlen(pesertafinal[i].program,peserta[i].program2));

//         printf("|\n");
//     }

//     border(longer);//Border print
// }
void addPeserta(char pita[],int *nPeserta){//Add for BukuMentah
    int i,x;//Var init
    x = n[0];//Assign data number to x
    n[0] += 1;//plus 1 peserta data number

    incKata(pita);
    strcpy(peserta[x].id,getCKata());
    incKata(pita);
    strcpy(peserta[x].nama,getCKata());
    incKata(pita);
    strcpy(peserta[x].program,getCKata());

    FILE *dataPeserta;
    dataPeserta = fopen("peserta.dat","w");

    for(i=0;i<n[0];i++){
        fprintf(dataPeserta,"%s %s %s\n",peserta[i].id,peserta[i].nama,peserta[i].program);
    }

    fprintf(dataPeserta,"#### #### ####");

    fclose(dataPeserta);
}
void addProgram(char pita[],int *nProgram){//Add for BukuMentah
    int i,x;//Var init
    x = n[0];//Assign data number to x
    n[0] += 1;//plus 1 program data number

    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);

    incKata(pita);
    strcpy(program[x].id,getCKata());
    incKata(pita);
    strcpy(program[x].namaProgram,getCKata());
    incKata(pita);
    strcpy(program[x].pengajar,getCKata());

    indeks = temp;
    strcpy(cKata,tempS);

    FILE *dataPeserta;
    dataPeserta = fopen("peserta.dat","w");

    for(i=0;i<n[0];i++){
        fprintf(dataPeserta,"%s %s %s\n",peserta[i].id,peserta[i].nama,peserta[i].program);
    }

    fprintf(dataPeserta,"#### #### ####");

    fclose(dataPeserta);
}

// ~~~ Checker Tools ~~~
int jumlahKata(char pita[]){
    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);
    int jKata = 0;

    while(EOPKata(pita) == 0){
        jKata++;
        incKata(pita);
    }
    if(getPanjangKata > 0){
        jKata++;
    }

    indeks = temp;
    strcpy(cKata,tempS);

    return jKata;
}



// ~~~ Data Manipulation ~~~
void insert(char pita[],int *nPeserta){
    incKata(pita);

    //is table exist?
    if(strcmp(getCKata(),"peserta") == 0){
        if(jumlahKata(pita) == 5){
            addPeserta(pita,nPeserta);
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else if(strcmp(getCKata(),"program") == 0){
        if(jumlahKata(pita) == 5){
            addProgram(pita,nProgram);
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else{
        printf("Tabel tidak ditemukan\n\n");
    }
}

int exitT(){
    system("exit");
}
void insertQuery(char *pita){
    printf("KenDB>");
    scanf(" %99[^\n]s",pita);
}