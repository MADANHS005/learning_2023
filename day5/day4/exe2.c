#include<stdio.h>
int main(){
    int numbers[5]={10,5,30,20,15};
    int min=numbers[0];
    int max=numbers[0];
    int size=sizeof(numbers)/sizeof(numbers[0]);
     for (int i = 0; i < size; i++)
    {
         if(numbers[i] < min){
            min=numbers[i];
         }
         if(numbers[i] > max){
            max=numbers[i];
         }
    }
    
    printf("minimum element in array is : %d\n",min);
    printf("maximum element in array array is : %d\n",max);
    
    return 0;
}