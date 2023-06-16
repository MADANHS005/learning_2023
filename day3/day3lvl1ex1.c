#include <stdio.h>

void printNumbers(int n);
void printSpaces(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces(2 * (n - i));
        printNumbers(i);
        printf("\n");
    }

    return 0;
}

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}