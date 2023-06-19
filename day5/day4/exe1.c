#include<stdio.h>
int main(){
    int numbers[5]={10,20,30,40,50};
    int sum=0;
    double average=0;
    int size=sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
         sum +=numbers[i];
    }
    average=sum/size;

    printf("Sum of array is : %d\n",sum);
    printf("average of array is : %.2f\n",average);
    
    return 0;
}