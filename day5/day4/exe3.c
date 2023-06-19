#include<stdio.h>

void reversearray(int numbers[],int size){
    int start=0;
    int end=size-1;
    
    while(start<end){
        int temp=start[numbers];
        start[numbers]=end[numbers];
        end[numbers]=temp;

        start++;
        end--;

    }
}



int main(){
    int numbers[5]={10, 5, 30, 20, 15};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    printf(" original array :");
     for (int i = 0; i < size; i++)
    {
      printf("%d",numbers[i]);  
    }
    printf("\t");

    reversearray(numbers,size);
    
   printf(" reversed  array :");
     for (int i = 0; i < size; i++)
    {
      printf("%d",numbers[i]);  
    }
     printf("\t");

    return 0;
}