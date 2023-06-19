#include<stdio.h>

void togglecase(char *str){
    for(int i=0;str[i]!='\0'; i++){
        if(str[i] >='a' && str[i] <= 'z'){
            str[i]=str[i]-'a'+'A';
        }
        else if(str[i] >='A' && str[i] <= 'Z'){
            str[i]=str[i]-'A'+'a';
        } 
    }
}




int main(){
    char str[100];
    printf("Enter a complex string of different case :");
    fgets(str,sizeof(str),stdin);
    printf("original string :%s\n",str);
    togglecase(str);
    printf("Toggled case string is %s",str);

    return 0;
}