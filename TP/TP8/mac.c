#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP8 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void readBuku(int *n){//Read ListBukuMentah.dat
    int i=0;

    FILE *dataBuku;
    dataBuku = fopen("ListBukuMentah.dat","r");

    fscanf(dataBuku,"%s %s %s %s", buku[i].judul,buku[i].author,buku[i].genre,buku[i].toko);
    
    //Data scan
    while(strcmp(buku[i-1].judul,"####") != 0){
        i++;
        fscanf(dataBuku,"%s %s %s %s", buku[i].judul,buku[i].author,buku[i].genre,buku[i].toko);
    }

    fclose(dataBuku);
    n[0] = i-1;//Set buku mentah number(jumlah)
    
    //Copy buku mentah values to buku final
    for(i=0;i<n[0];i++){
        strcpy(bukufinal[i].judul,buku[i].judul);
        strcpy(bukufinal[i].author,buku[i].author);
        strcpy(bukufinal[i].genre,buku[i].genre);
        strcpy(bukufinal[i].toko,buku[i].toko);
    }
}
void readOther(int *n,char par){//Read data
    int i=0;

    FILE *datas;

    if(par == 'a'){//Read Author.dat

        datas = fopen("Author.dat","r");
        
        fscanf(datas,"%s %s",author[i].kode,author[i].nama);

        // Data scan
        while(strcmp(author[i-1].kode,"####") != 0){
            i++;
            fscanf(datas,"%s %s",author[i].kode,author[i].nama);
        }

        n[1] = i-1;//Set author number
    }
    if(par == 'g'){//Read Genre.dat
        datas = fopen("Genre.dat","r");

        fscanf(datas,"%s %s",genre[i].kode,genre[i].nama);
    
        while(strcmp(genre[i-1].kode,"####") != 0){
            i++;
            fscanf(datas,"%s %s",genre[i].kode,genre[i].nama);
        }
        n[2] = i-1;//Set genre number
    }
    if(par == 't'){//Read TokoBuku.dat
        datas = fopen("TokoBuku.dat","r");

        fscanf(datas,"%s %s",toko[i].kode,toko[i].nama);
    
        while(strcmp(toko[i-1].kode,"####") != 0){
            i++;
            fscanf(datas,"%s %s",toko[i].kode,toko[i].nama);
        }
        
        n[3] = i-1;//Set toko buku number
    }
    fclose(datas);
}
int search(int n[],char value[20],char par){//Value search
    int i,hasil=-1;//init hasil with -1 to identify when value not found

    if(par == 'a'){//Search for Author
        for(i=0;i<n[1];i++){
            if(strcmp(value,author[i].kode) == 0){//if value same
                hasil = i;//assign index number to hasil
                break;//get out from for
            }
        }
    }
    if(par = 'g'){//Search for Genre
        for(i=0;i<n[2];i++){
            if(strcmp(value,genre[i].kode) == 0){
                hasil = i;
                break;
            }
        }
    }
    if(par = 't'){//Search for Toko
        for(i=0;i<n[3];i++){
            if(strcmp(value,toko[i].kode) == 0){
                hasil = i;
                break;
            }
        }
    }
    
    return hasil;
}
void changeValues(int n[]){//Change code value in buku mentah to name in buku final
    int i,j,a,g,t;
    
    for(i=0;i<n[0];i++){
        a = search(n,bukufinal[i].author,'a');//search author value then assign to a
        g = search(n,bukufinal[i].genre,'g');//search genre value then assign to g
        t = search(n,bukufinal[i].toko,'t');//search toko value then assign to t

        if(a == -1){
            strcpy(bukufinal[i].author,"-");//If author not found, print -
        }else{
            strcpy(bukufinal[i].author,author[a].nama);//Author name print
        }
        if(g == -1){
            strcpy(bukufinal[i].genre,"-");//If genre not found, print -
        }else{
            strcpy(bukufinal[i].genre,genre[g].nama);//Genre name print
        }
        if(t == -1){
            strcpy(bukufinal[i].toko,"-");//If toko not found, print -
        }else{
            strcpy(bukufinal[i].toko,toko[t].nama);//Toko name print
        }
    }

}
void writeFinal(int n[]){//Write ListBukuFinal.dat
    int i;

    FILE *dataBuku;
    dataBuku = fopen("ListBukuFinal.dat","w");

    // fscanf(dataBuku,"%s %s %s %s", bukufinal[i].judul,bukufinal[i].author,bukufinal[i].genre,bukufinal[i].toko);
    
    for(i=0;i<n[0];i++){
        fprintf(dataBuku,"%s %s %s %s\n", bukufinal[i].judul,bukufinal[i].author,bukufinal[i].genre,bukufinal[i].toko);
    }

    fprintf(dataBuku,"#### #### #### ####");

    fclose(dataBuku);
}
void border(int longer[]){//Print border
    int i,j;
    printf("+");//Print edge
    for(i=0;i<=3;i++){
        if(i>0){//Print record divider
            printf("+");
        }
        for(j=0;j<longer[i];j++){//Print line
            printf("-");
        }
    }
    printf("+\n");//Print edge
}
void spacePrint(int space,int longer,int value){//Space print
    int j;
    space = longer - value;//minus longer with record value length, then assign to space
    for(j=0;j<space;j++){//Printing space as long as space
        printf(" ");
    }
}
void printTable(int n[]){//Show buku final data
    int i,j,x,space[4],longer[4]={0,0,0,0};
    char top[4][20] = {"Judul","Author","Genre","Toko"};//init for title fields

    //Counting longest number of each  field
    for(i=0;i<n[0];i++){
        if(strlen(bukufinal[i].judul)>longer[0]){//If detected value longer
            longer[0] = strlen(bukufinal[i].judul);//Assign value to longer(var)
        }
        if(strlen(bukufinal[i].author)>longer[1]){
            longer[1] = strlen(bukufinal[i].author);
        }
        if(strlen(bukufinal[i].genre)>longer[2]){
            longer[2] = strlen(bukufinal[i].genre);
        }
        if(strlen(bukufinal[i].toko)>longer[3]){
            longer[3] = strlen(bukufinal[i].toko);
        }
        if(strlen(top[i])>longer[4]){
            longer[4] = strlen(top[i]);
        }
    }

    border(longer);//Border print

    //Printing header/fields title
    for(i=0;i<=3;i++){
        printf("|%s",top[i]);
        spacePrint(space[i],longer[i],strlen(top[i]));
    }
    printf("|\n");

    border(longer);//Border print

    //Print each field values
    for(i=0;i<n[0];i++){
        printf("|%s",bukufinal[i].judul);//record value print
        spacePrint(space[0],longer[0],strlen(bukufinal[i].judul));//Space print
        
        printf("|%s",bukufinal[i].author);
        spacePrint(space[1],longer[1],strlen(bukufinal[i].author));

        printf("|%s",bukufinal[i].genre);
        spacePrint(space[2],longer[2],strlen(bukufinal[i].genre));

        printf("|%s",bukufinal[i].toko);
        spacePrint(space[3],longer[3],strlen(bukufinal[i].toko));

        printf("|\n");
    }

    border(longer);//Border print
}
void addBuku(int *n){//Add for BukuMentah
    int i,x;//Var init
    x = n[0];//Assign data number to x
    n[0] += 1;//plus 1 buku data number

    printf("Judul         : "); scanf("%s",buku[x].judul);
    printf("Kode Author   : "); scanf("%s",buku[x].author);
    printf("Kode Genre    : "); scanf("%s",buku[x].genre);
    printf("Kode Toko Buku: "); scanf("%s",buku[x].toko);

    FILE *dataBuku;
    dataBuku = fopen("ListBukuMentah.dat","w");

    for(i=0;i<n[0];i++){
        fprintf(dataBuku,"%s %s %s %s\n",buku[i].judul,buku[i].author,buku[i].genre,buku[i].toko);
    }

    fprintf(dataBuku,"#### #### #### ####");

    fclose(dataBuku);
    front(n);
}
void addOther(int *n,char par){//Add data
    int i,x;

    FILE *datas;

    if(par == 'a'){//Add for Author
        x = n[1];//Assign data number to x
        n[1] += 1;//Plus 1 author data number

        //Data input
        printf("Kode       : "); scanf("%s",author[x].kode);
        printf("Nama Author: "); scanf("%s",author[x].nama);

        //Printing data to file
        datas = fopen("Author.dat","w");
        
        //Data print
        for(i=0;i<n[1];i++){
            fprintf(datas,"%s %s\n",author[i].kode,author[i].nama);
        }
    }
    if(par == 'g'){//Add for Genre
        x = n[2];
        n[2] += 1;//Plus 1 genre data number

        printf("Kode      : "); scanf("%s",genre[x].kode);
        printf("Nama Genre: "); scanf("%s",genre[x].nama);

        datas = fopen("Genre.dat","w");

        for(i=0;i<n[2];i++){
            fprintf(datas,"%s %s\n",genre[i].kode,genre[i].nama);
        }
    }
    if(par == 't'){//Add for Toko Buku
        x = n[3];
        n[3] += 1;//Plus 1 toko buku data number

        printf("Kode          : "); scanf("%s",toko[x].kode);
        printf("Nama Toko Buku: "); scanf("%s",toko[x].nama);
        
        datas = fopen("TokoBuku.dat","w");

        for(i=0;i<n[3];i++){
            fprintf(datas,"%s %s\n",toko[i].kode,toko[i].nama);
        }
        
    }

    fprintf(datas,"#### #### #### ####");

    fclose(datas);
    front(n);
}
void menu(int *n){//Menu Print
    int x=0;

    
    printf("|                   Tambah Data                   |\n");
    printf("| 1. Buku   | 2. Author | 3. Genre | 4. Toko Buku |\n");
    printf("| 0. Keluar |                                     |\n");
    //Option Selection
    printf("Pilih : ");
    scanf("%d",&x);

    if(x==1){
        addBuku(n);
    }else if(x==2){
        addOther(n,'a');
    }else if(x==3){
        addOther(n,'g');
    }else if(x==4){
        addOther(n,'t');
    }
}
void front(int *n){//Front. Start
    system("cls");//Clear console

    readBuku(n);//Read ListBukuMentah.dat
    readOther(n,'a');//Read Author.dat
    readOther(n,'g');//Read Genre.dat
    readOther(n,'t');//Read TokoBuku.dat

    changeValues(n);//Change code value to name/string

    writeFinal(n);//write manipulated data to ListBukuFinal.dat

    printTable(n);//Print Final Data in table form
    menu(n);//Menu Print
}