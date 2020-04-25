#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan Evaluasi (WFHYA220) WFH ya Eval! 1C2 dalam mata kuliah Algoritma Pemgrograman 2 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void load(int n,int m,char (*arr)[20],char (*arr2)[20],char (*final)[20]){
    int i,j,full=0;
    for(i=0;i<n;i++){
        strcpy(final[full],arr[i]);
        full++;
    }
    for(i=0;i<m;i++){
        strcpy(final[full],arr2[i]);
        full++;
    }
}
void bubble(int n,char (*final)[20]){
    int i,j,move;
    char temp[20];
    
    do{
        move = 0;
        for(i=0;i<n-1;i++){
            if(strlen(final[i])>strlen(final[i+1])){
                //Swap values
                strcpy(temp,final[i]);
                strcpy(final[i],final[i+1]);
                strcpy(final[i+1],temp);

                move++;  
            }
        }
        for(i=0;i<n-1;i++){
            if((strlen(final[i])==strlen(final[i+1]))&&(((final[i][0]-32)==final[i+1][0])||((final[i][0])==final[i+1][0]-32))&&(final[i][0]>final[i+1][0])){
                //Swap values
                strcpy(temp,final[i]);
                strcpy(final[i],final[i+1]);
                strcpy(final[i+1],temp);

                move++;  
            }
            if((strlen(final[i])==strlen(final[i+1]))&&((final[i][0]>'Z'&&final[i+1][0]<'a')||(final[i][0]<'a'&&final[i+1][0]>'Z'))&&(final[i][0]<final[i+1][0])){
                //Swap values
                strcpy(temp,final[i]);
                strcpy(final[i],final[i+1]);
                strcpy(final[i+1],temp);

                move++;  
            }
            if((strlen(final[i])==strlen(final[i+1]))&&(final[i][0]>'Z')&&(final[i+1][0]>'Z')&&(final[i][0]>final[i+1][0])){
                //Swap values
                strcpy(temp,final[i]);
                strcpy(final[i],final[i+1]);
                strcpy(final[i+1],temp);

                move++;  
            }
            if((strlen(final[i])==strlen(final[i+1]))&&(final[i][0]<'a')&&(final[i+1][0]<'a')&&(final[i][0]>final[i+1][0])){
                //Swap values
                strcpy(temp,final[i]);
                strcpy(final[i],final[i+1]);
                strcpy(final[i+1],temp);

                move++;  
            }
        }    
        }while(move!=0);
}
void quick(char (*final)[20],int left,int right){
    int i=left,j=right;
    char temp[20];
    do{
        while((strlen(final[i])<strlen(final[right]))&&(i<=j)){
            i++;
        }
        while((strlen(final[j])>strlen(final[left]))&&(i<=j)){
            j--;
        }

        if(i<j){
            strcpy(temp,final[i]);
            strcpy(final[i],final[j]);
            strcpy(final[j],temp);

            i++;
            j--;
        }
    }while(i<j);
    do{
        while((strlen(final[i])==strlen(final[right]))&&(((final[i][0]-32)==final[right][0])||((final[i][0])==final[right][0]-32))&&(final[i][0]>final[i+1][0])){
            i++;
        }
        while((strlen(final[j])==strlen(final[left]))&&(((final[j][0]-32)==final[left][0])||((final[j][0])==final[left][0]-32))&&(final[i][0]>final[i+1][0])){
            j--;
        }

        while((strlen(final[i])==strlen(final[right]))&&((final[i][0]>'Z'&&final[right][0]<'a')||(final[i][0]<'a'&&final[right][0]>'Z'))&&(final[i][0]<final[i+1][0])){
            i++;
        }
        while((strlen(final[j])==strlen(final[left]))&&((final[j][0]>'Z'&&final[left][0]<'a')||(final[j][0]<'a'&&final[left][0]>'Z'))&&(final[i][0]<final[i+1][0])){
            j--;
        }

        while((strlen(final[i])==strlen(final[right]))&&(final[i][0]>'Z')&&(final[right][0]>'Z')&&(final[i][0]>final[right][0])){
            i++;
        }
        while((strlen(final[j])==strlen(final[left]))&&(final[j][0]>'Z')&&(final[left][0]>'Z')&&(final[j][0]>final[left][0])){
            j--;
        }

        while((strlen(final[i])==strlen(final[right]))&&(final[i][0]<'a')&&(final[right][0]<'a')&&(final[i][0]>final[right][0])){
            i++;
        }
        while((strlen(final[j])==strlen(final[left]))&&(final[j][0]<'a')&&(final[left][0]<'a')&&(final[j][0]>final[left][0])){
            j--;
        }


        if(i<j){
            strcpy(temp,final[i]);
            strcpy(final[i],final[j]);
            strcpy(final[j],temp);

            i++;
            j--;
        }
    }while(i<j);
    
    if(left<j){
        quick(final,left,j);
    }
    if(i<right){
        quick(final,i,right);
    }
}
void selection(int n,char (*final)[20]){
    int i,j,min;
    char temp[20];
        
    for(i=0;i<n;i++){
        min = i;//Assign minimum value
        for(j=i+1;j<n;j++){
            if(strlen(final[min])>strlen(final[j])){//If temporary minimum value longer, set shorter value as minimum value
                min = j;
            }
        }
        // Swap array datas
        strcpy(temp,final[i]);
        strcpy(final[i],final[j]);
        strcpy(final[j],temp);
    }

    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
                       
            if((strlen(final[min])==strlen(final[j]))&&(((final[min][0]-32)==final[j][0])||((final[min][0])==final[j][0]-32))&&(final[min][0]>final[j][0])){
                min = j;
            }
        }
        // Swap array datas
        strcpy(temp,final[i]);
        strcpy(final[i],final[j]);
        strcpy(final[j],temp);
    }
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if((strlen(final[min])==strlen(final[j]))&&((final[min][0]>'Z'&&final[j][0]<'a')||(final[min][0]<'a'&&final[j][0]>'Z'))&&(final[min][0]<final[j][0])){
                min = j;
            }
        }
        // Swap array datas
        strcpy(temp,final[i]);
        strcpy(final[i],final[j]);
        strcpy(final[j],temp);
    }
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if((strlen(final[min])==strlen(final[j]))&&(final[min][0]>'Z')&&(final[j][0]>'Z')&&(final[min][0]>final[j][0])){
                min = j;
            }
        }
        // Swap array datas
        strcpy(temp,final[i]);
        strcpy(final[i],final[j]);
        strcpy(final[j],temp);
    }
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if((strlen(final[min])==strlen(final[j]))&&(final[min][0]<'a')&&(final[j][0]<'a')&&(final[min][0]>final[j][0])){
                min = j;
            }
        }
        // Swap array datas
        strcpy(temp,final[i]);
        strcpy(final[i],final[j]);
        strcpy(final[j],temp);
    }
}
void insertion(int n,char (*final)[20]){
    int i,j;
    char temp[20];

    for(i=1;i<n;i++){
        //Set temp data
        strcpy(temp,final[i]);
        j=i-1;

        while((strlen(temp)<strlen(final[j]))&&(j>=0)){//Compare Values
            strcpy(final[j+1],final[j]);
            j-=1;
        }
        //Assign temp to array
        
        strcpy(final[j+1],temp);
    }
    
    for(i=1;i<n;i++){
        //Set temp data
        strcpy(temp,final[i]);
        j=i-1;
        
        while((strlen(temp)==strlen(final[j]))&&((temp[0]>'Z'&&final[j][0]<'a')||(temp[0]<'a'&&final[j][0]>'Z'))&&(temp[0]>final[j][0])&&(j>=0)){//Compare ASCII Values
            strcpy(final[j+1],final[j]);
            j-=1;
        }
        //Assign temp to array
        
        strcpy(final[j+1],temp);
    }
    for(i=1;i<n;i++){
        //Set temp data
        strcpy(temp,final[i]);
        j=i-1;
        
        while((strlen(temp)==strlen(final[j]))&&(temp[0]>'Z')&&(final[j][0]>'Z')&&(temp[0]<final[j][0])&&(j>=0)){//Compare ASCII Values
            strcpy(final[j+1],final[j]);
            j-=1;
        }
        //Assign temp to array
        
        strcpy(final[j+1],temp);
    }
    for(i=1;i<n;i++){
        //Set temp data
        strcpy(temp,final[i]);
        j=i-1;
        
        while((strlen(temp)==strlen(final[j]))&&(temp[0]<'a')&&(final[j][0]<'a')&&(temp[0]>final[j][0])&&(j>=0)){//Compare ASCII Values
            strcpy(final[j+1],final[j]);
            j-=1;
        }
        //Assign temp to array
        
        strcpy(final[j+1],temp);
    }
    for(i=1;i<n;i++){
        //Set temp data
        strcpy(temp,final[i]);
        j=i-1;
        
        while((strlen(temp)==strlen(final[j]))&&(((temp[0]-32)==final[j][0])||((temp[0])==final[j][0]-32))&&(temp[0]>final[j][0])&&(j>=0)){//Compare ASCII Values
            strcpy(final[j+1],final[j]);
            j-=1;
        }
        //Assign temp to array
        
        strcpy(final[j+1],temp);
    }
}
void printSort(int n,char (*final)[20]){
    int i;
    //Print
    for(i=0;i<n;i++){
        printf("%s\n",final[i]);
    }
}