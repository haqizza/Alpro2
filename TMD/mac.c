#include "head.h"
#include "mesinkata.h"
#include "mesinkarakter.h"
//Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

// ~~~ File Manipulation ~~~
void readPeserta(){//Read peserta.dat
    int i = 0;
    nPeserta = 0;

    FILE *dataPeserta;
    dataPeserta = fopen("peserta.dat","r");

    fscanf(dataPeserta,"%s %s %s", peserta[i].id,peserta[i].nama,peserta[i].program);
    //Data scan
    while(strcmp(peserta[i-1].id,"####") != 0){
        i++;
        fscanf(dataPeserta,"%s %s %s\n", peserta[i].id,peserta[i].nama,peserta[i].program);
    }

    fclose(dataPeserta);
    nPeserta = i-1;//Set peserta number(jumlah)
    
    //Copy peserta values to peserta final
    // for(i=0;i<n[0];i++){
    //     strcpy(pesertafinal[i].id,peserta[i].id);
    //     strcpy(pesertafinal[i].nama,peserta[i].nama);
    //     strcpy(pesertafinal[i].program,peserta[i].program);
    // }
}
void readProgram(){//Read program.dat
    int i=0;
    nProgram = 0;
    
    FILE *dataProgram;
    dataProgram = fopen("program.dat","r");
        
    fscanf(dataProgram,"%s %s %s",program[i].id,program[i].namaProgram,program[i].pengajar);

    // Data scan
    while(strcmp(program[i-1].id,"####") != 0){
        i++;
        fscanf(dataProgram,"%s %s %s",program[i].id,program[i].namaProgram,program[i].pengajar);
    }

    nProgram = i-1;//Set program number
    
    fclose(dataProgram);
}
void writePeserta(){
    int i;
    
    FILE *dataPeserta;
    dataPeserta = fopen("peserta.dat","w");

    for(i=0;i<nPeserta;i++){
        fprintf(dataPeserta,"%s %s %s\n",peserta[i].id,peserta[i].nama,peserta[i].program);
    }

    fprintf(dataPeserta,"#### #### ####");

    fclose(dataPeserta);
}
void writeProgram(){
    int i;

    FILE *dataProgram;
    dataProgram = fopen("program.dat","w");

    for(i=0;i<nProgram;i++){
        fprintf(dataProgram,"%s %s %s\n",program[i].id,program[i].namaProgram,program[i].pengajar);
    }

    fprintf(dataProgram,"#### #### ####");

    fclose(dataProgram);
}

//Query Processor / Data Manipulation
void addPeserta(char pita[]){//Add peserta
    int i,x;//Var init
    x = nPeserta;//Assign data number to x
    nPeserta += 1;//plus 1 peserta data number

    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);

    strcpy(peserta[x].id,getCKata());
    incKata(pita);
    strcpy(peserta[x].nama,getCKata());
    incKata(pita);
    strcpy(peserta[x].program,getCKata());
    
    indeks = temp;
    strcpy(cKata,tempS);

    writePeserta();
}
void addProgram(char pita[]){//Add program
    int i,x;//Var init
    x = nProgram;//Assign data number to x
    nProgram += 1;//plus 1 program data number

    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);

    strcpy(program[x].id,getCKata());
    incKata(pita);
    strcpy(program[x].namaProgram,getCKata());
    incKata(pita);
    strcpy(program[x].pengajar,getCKata());

    indeks = temp;
    strcpy(cKata,tempS);

    writeProgram();
}
void changePeserta(char pita[]){//Add for BukuMentah
    int i,x;//Var init
    x = search('a');//Assign data index to x

    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);

    incKata(pita);
    strcpy(peserta[x].nama,getCKata());
    incKata(pita);
    strcpy(peserta[x].program,getCKata());
    
    indeks = temp;
    strcpy(cKata,tempS);

    writePeserta();
}
void changeProgram(char pita[]){//Add program
    int i,x;//Var init
    x = search('p');//Assign data index to x

    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);

    incKata(pita);
    strcpy(program[x].namaProgram,getCKata());
    incKata(pita);
    strcpy(program[x].pengajar,getCKata());

    indeks = temp;
    strcpy(cKata,tempS);

    writeProgram();
}
void deletePeserta(char pita[]){//Add peserta
    int x;//Var init
    x = search('a');
    
    if(x != (nPeserta-1)){
        for(x;x < nPeserta;x++){
            strcpy(peserta[x].id,peserta[x+1].id);
            strcpy(peserta[x].nama,peserta[x+1].nama);
            strcpy(peserta[x].program,peserta[x+1].program);
        }
        
    }

    peserta[x].id[0] = '\0';
    peserta[x].nama[0] = '\0';
    peserta[x].program[0] = '\0';

    nPeserta -= 1;//minus 1 peserta data number

    writePeserta();
}
void deleteProgram(char pita[]){//Add program
    int x;//Var init
    x = search('p');

    if(x != (nProgram-1)){
        for(x;x < nProgram;x++){
            strcpy(program[x].id,program[x+1].id);
            strcpy(program[x].namaProgram,program[x+1].namaProgram);
            strcpy(program[x].pengajar,program[x+1].pengajar);
        }
    }

    program[x].id[0] = '\0';
    program[x].namaProgram[0] = '\0';
    program[x].pengajar[0] = '\0';

    nProgram -= 1;//minus 1 program data number

    writeProgram();
}

// ~~~ Tools ~~~
void insertQuery(char *pita){
    printf("KenDB>");
    scanf(" %99[^\n]s",pita);
    EOPCheck(pita);
}
void EOPCheck(char pita[]){
    start(pita);
    while(EOP() == 0){
        if(EOP() == 1){
            break;
        }
        inc(pita);
    }
    if(EOP() == 1){
        printf("EOP Tidak Terdeteksi\n\n");
        insertQuery(pita);
    }
}
int jumlahKata(char pita[]){
    int temp = indeks;
    char tempS[50];
    strcpy(tempS,cKata);
    int jKata = 0;

    while(EOPKata(pita) == 0){
        jKata++;
        incKata(pita);
    }
    if(getPanjangKata() > 0){
        jKata++;
    }

    indeks = temp;
    strcpy(cKata,tempS);

    return jKata;
}
int search(char par){//Value search
    int i,hasil=-1;//init hasil with -1 to identify when value not found
    
    if(par == 'a'){//Search for Peserta
        for(i=0;i<nPeserta;i++){
            if(strcmp(getCKata(),peserta[i].id) == 0){//if value same
                hasil = i;//assign indeks number to hasil
                break;//get out from for
            }
        }
    }
    if(par = 'p'){//Search for Program
        for(i=0;i<nProgram;i++){
            if(strcmp(getCKata(),program[i].id) == 0){
                hasil = i;
                break;
            }
        }
    }
    
    return hasil;
}

// ~~~ Data Manipulation ~~~
void insert(char pita[]){
    incKata(pita);

    //is table exist?
    if(strcmp(getCKata(),"peserta") == 0){
        incKata(pita);
        
        if(jumlahKata(pita) == 3){
            if(search('a') == -1){
                addPeserta(pita);
            }
            else{
                printf("ID sudah digunakan\n\n");
            }
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else if(strcmp(getCKata(),"program") == 0){
        incKata(pita);
        
        if(jumlahKata(pita) == 3){
            if(search('p') == -1){
                addProgram(pita);
            }
            else{
                printf("ID sudah digunakan\n\n");
            }
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else{
        printf("Tabel tidak ditemukan\n\n");
    }
}
void update(char pita[]){
    incKata(pita);

    //is table exist?
    if(strcmp(getCKata(),"peserta") == 0){
        incKata(pita);
        
        if(jumlahKata(pita) == 3){
            if(search('a') != -1){
                changePeserta(pita);
            }
            else{
                printf("Data tidak ditemukan\n\n");
            }
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else if(strcmp(getCKata(),"program") == 0){
        incKata(pita);
        
        if(jumlahKata(pita) == 3){
            if(search('p') != -1){
                changeProgram(pita);
            }
            else{
                printf("Data tidak ditemukan\n\n");
            }
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else{
        printf("Tabel tidak ditemukan\n\n");
    }
}
void deleteQ(char pita[]){
    incKata(pita);

    //is table exist?
    if(strcmp(getCKata(),"peserta") == 0){
        incKata(pita);
        
        if((jumlahKata(pita) == 1)){
            if(search('a') != -1){
                deletePeserta(pita);
            }
            else{
                printf("Data tidak ditemukan\n\n");
            }
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else if(strcmp(getCKata(),"program") == 0){
        incKata(pita);
        
        if(jumlahKata(pita) == 1){
            if(search('p') != -1){
                deleteProgram(pita);
            }
            else{
                printf("Data tidak ditemukan\n\n");
            }
        }
        else{
            printf("Data yang dimasukkan tidak sesuai\n\n");
        }
    }else{
        printf("Tabel tidak ditemukan\n\n");
    }
}
void outCheck(char pita[]){
    if(jumlahKata(pita) == 4){
        incKata(pita);

        if(strcmp(getCKata(),"to") == 0){
            incKata(pita);

            if(strcmp(getCKata(),"meet") == 0){
                incKata(pita);
                printf("kl\n");
                if(strcmp(getCKata(),"you") == 0){ 
                    xit = 0;
                }
                else{
                    printf("Query tidak valid\n\n");
                }
            }
            else{
                printf("Query tidak valid\n\n");
            }
        }
        else{
            printf("Query tidak valid\n\n");
        }
        printf("kl1\n");
    }
    else{
        printf("Query tidak valid\n\n");
    }
}

