#include <stdio.h>

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("%d is the biggest number\n", number1);
    } else if (number2 > number1) {
        printf("%d is the biggest number\n", number2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}