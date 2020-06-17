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
    
    //Copy peserta values to peserta 
    // for(i=0;i<n[0];i++){
    //     strcpy(peserta[i].id,peserta[i].id);
    //     strcpy(peserta[i].nama,peserta[i].nama);
    //     strcpy(peserta[i].program,peserta[i].program);
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
    x = search('a',getCKata());//Assign data index to x

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
    x = search('p',getCKata());//Assign data index to x

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
    x = search('a',getCKata());
    
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
    x = search('p',getCKata());

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
void selectPeserta(char pita[]){
    int i,space[3],longer[4]={2,4,7};
    char top[3][15] = {"Id","Nama","Program"};//init for title fields

    //Counting longest number of each  field
    for(i=0;i<nPeserta;i++){
        if(strlen(peserta[i].id)>longer[0]){//If detected value longer
            longer[0] = strlen(peserta[i].id);//Assign value to longer(var)
        }
        if(strlen(peserta[i].nama)>longer[1]){
            longer[1] = strlen(peserta[i].nama);
        }
        if(strlen(peserta[i].program)>longer[2]){
            longer[2] = strlen(peserta[i].program);
        }
    }

    border(longer,3);//Border print

    //Printing header/fields title
    for(i=0;i<3;i++){
        printf("|%s",top[i]);
        spacePrint(space[i],longer[i],strlen(top[i]));
    }
    printf("|\n");

    border(longer,3);//Border print

    //Print each field values
    for(i=0;i<nPeserta;i++){
        printf("|%s",peserta[i].id);//record value print
        spacePrint(space[0],longer[0],strlen(peserta[i].id));//Space print
        
        printf("|%s",peserta[i].nama);
        spacePrint(space[1],longer[1],strlen(peserta[i].nama));

        printf("|%s",peserta[i].program);
        spacePrint(space[2],longer[2],strlen(peserta[i].program));

        printf("|\n");
    }

    border(longer,3);//Border print
}
void selectProgram(char pita[]){
    int i,space[3],longer[4]={2,12,8};
    char top[3][15] = {"Id","Nama_Program","Pengajar"};//init for title fields

    //Counting longest number of each  field
    for(i=0;i<nProgram;i++){
        if(strlen(program[i].id)>longer[0]){//If detected value longer
            longer[0] = strlen(program[i].id);//Assign value to longer(var)
        }
        if(strlen(program[i].namaProgram)>longer[1]){
            longer[1] = strlen(program[i].namaProgram);
        }
        if(strlen(program[i].pengajar)>longer[2]){
            longer[2] = strlen(program[i].pengajar);
        }
    }

    border(longer,3);//Border print

    //Printing header/fields title
    for(i=0;i<3;i++){
        printf("|%s",top[i]);
        spacePrint(space[i],longer[i],strlen(top[i]));
    }
    printf("|\n");

    border(longer,3);//Border print

    //Print each field values
    for(i=0;i<nProgram;i++){
        printf("|%s",program[i].id);//record value print
        spacePrint(space[0],longer[0],strlen(program[i].id));//Space print
        
        printf("|%s",program[i].namaProgram);
        spacePrint(space[1],longer[1],strlen(program[i].namaProgram));

        printf("|%s",program[i].pengajar);
        spacePrint(space[2],longer[2],strlen(program[i].pengajar));

        printf("|\n");
    }

    border(longer,3);//Border print
}
void selectJoin(char pita[]){
    int i,x,space[4],longer[4]={2,4,12,8};
    char top[4][15] = {"Id","Nama","Nama_Program","Pengajar"};//init for title fields

    //Counting longest number of each  field
    for(i=0;i<nPeserta;i++){
        if(strlen(peserta[i].id)>longer[0]){//If detected value longer
            longer[0] = strlen(peserta[i].id);//Assign value to longer(var)
        }
        if(strlen(peserta[i].nama)>longer[1]){
            longer[1] = strlen(peserta[i].nama);
        }
    }
    for(i=0;i<nProgram;i++){
        if(strlen(program[i].namaProgram)>longer[2]){//If detected value longer
            longer[2] = strlen(program[i].namaProgram);//Assign value to longer(var)
        }
        if(strlen(program[i].pengajar)>longer[3]){
            longer[3] = strlen(program[i].pengajar);
        }
    }

    border(longer,4);//Border print

    //Printing header/fields title
    for(i=0;i<4;i++){
        printf("|%s",top[i]);
        spacePrint(space[i],longer[i],strlen(top[i]));
    }
    printf("|\n");

    border(longer,4);//Border print

    //Print each field values
    for(i=0;i<nPeserta;i++){
        printf("|%s",peserta[i].id);//record value print
        spacePrint(space[0],longer[0],strlen(peserta[i].id));//Space print
        
        printf("|%s",peserta[i].nama);
        spacePrint(space[1],longer[1],strlen(peserta[i].nama));
        
        x = search('p',peserta[i].program);
        printf("|%s",program[x].namaProgram);
        spacePrint(space[2],longer[2],strlen(program[x].namaProgram));

        printf("|%s",program[x].pengajar);
        spacePrint(space[3],longer[3],strlen(program[x].pengajar));

        printf("|\n");
    }

    border(longer,4);//Border print
}

// ~~~ Tools ~~~
void insertQuery(char *pita){
    printf("KenDB>");
    scanf(" %99[^\n]s",pita);
    EOPCheck(pita);
    printf("\n");
}
void EOPCheck(char pita[]){
    start(pita);
    while(EOP() == 0){
        if(EOP() == 1){
            break;
        }
        inc(pita);
    }
    if(EOP() == 0){
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
int search(char par,char kata[]){//Value search
    int i,hasil=-1;//init hasil with -1 to identify when value not found
    
    if(par == 'a'){//Search for Peserta
        for(i=0;i<nPeserta;i++){
            if(strcmp(kata,peserta[i].id) == 0){//if value same
                hasil = i;//assign indeks number to hasil
                break;//get out from for
            }
        }
    }
    if(par = 'p'){//Search for Program
        for(i=0;i<nProgram;i++){
            if(strcmp(kata,program[i].id) == 0){
                hasil = i;
                break;
            }
        }
    }
    
    return hasil;
}
void spacePrint(int space,int longer,int value){//Space print
    int j;
    space = longer - value;//minus longer with record value length, then assign to space
    for(j=0;j<space;j++){//Printing space as long as space
        printf(" ");
    }
}
void border(int longer[],int col){//Print border
    int i,j;
    printf("+");//Print edge
    for(i=0;i<col;i++){
        if(i>0){//Print record divider
            printf("+");
        }
        for(j=0;j<longer[i];j++){//Print line
            printf("-");
        }
    }
    printf("+\n");//Print edge
}

// ~~~ Data Manipulation ~~~
void insert(char pita[]){
    incKata(pita);

    //is table exist?
    if(strcmp(getCKata(),"peserta") == 0){
        incKata(pita);
        
        if(jumlahKata(pita) == 3){
            if(search('a',getCKata()) == -1){
                addPeserta(pita);
                printf("Data berhasil ditambahkan\n\n");
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
            if(search('p',getCKata()) == -1){
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
            if(search('a',getCKata()) != -1){
                changePeserta(pita);
                printf("Data telah berhasil dirubah\n\n");
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
            if(search('p',getCKata()) != -1){
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
            if(search('a',getCKata()) != -1){
                deletePeserta(pita);
                printf("Data telah berhasil dihapus\n\n");
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
            if(search('p',getCKata()) != -1){
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
void select(char pita[]){
    incKata(pita);

    //is table exist?
    if((jumlahKata(pita) == 2) && (strcmp(getCKata(),"peserta") == 0)){
        incKata(pita);
        
        if(strcmp(getCKata(),"program") == 0){
            printf("Ini datamu!\n\n");
            selectJoin(pita);
        }
        else{
            printf("Tabel tidak ditemukan\n\n");
        }  
    }
    else if((jumlahKata(pita) == 1) && (strcmp(getCKata(),"peserta") == 0)){
        incKata(pita);
        printf("Ini datamu!\n\n");
        selectPeserta(pita);
    }
    else if((jumlahKata(pita) == 1) && (strcmp(getCKata(),"program") == 0)){
        incKata(pita);
        printf("Ini datamu!\n\n");
        selectProgram(pita);
    }
    else{
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
                
                if(strcmp(getCKata(),"you") == 0){ 
                    xit = 1;
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
        
    }
    else{
        printf("Query tidak valid\n\n");
    }
}

