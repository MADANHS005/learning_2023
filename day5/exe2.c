#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    printf("Enter a number as string :");
    fgets(str,sizeof(str),stdin);

    int num=atoi(str);
    printf("Converted integer is %d\n",num);
    return 0;
}