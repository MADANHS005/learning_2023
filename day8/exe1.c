#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fin,*fout;
    fin=fopen("read.txt","r");
    fout=fopen("write.txt","w+");
    
    if(NULL==fin){
        printf("file does not exist \n");
        return 2;
    }
    else{
        size_t maxlen=50;
        char*ptr=(char*)calloc(50,sizeof(char));

        while (getline(&ptr, &maxlen,fin) !=-1){
            fprintf(fout,"%s",ptr);

        }
        free(ptr);
        
    }
fclose(fin);

    return 0;
}