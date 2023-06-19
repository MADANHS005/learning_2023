#include<stdio.h>
int main(){
    int numbers[6]={2,5,8,3,6,9};
    int sumodd=0;
    int sumeven=0;
    int size=sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
        if(numbers[i]%2!=0){
         sumodd +=numbers[i];
        }
        else{
            sumeven +=numbers[i];
        }
    }
int difference=sumodd-sumeven;

    printf("Sum of odd elements in  array is : %d\n",sumodd);
    printf("sum of even elements in array is : %d\n",sumeven);
    printf("difference is %d:",difference);
    return 0;
}