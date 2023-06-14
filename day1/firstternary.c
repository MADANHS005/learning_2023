#include <stdio.h>

int main() {
    int number1, number2, result;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    result = (number1 > number2) ? number1 : number2;

    printf("The biggest number is: %d\n", result);

    return 0;
}