#include <stdio.h>

int removeDigit(int num, int pos);
int findLargestNumber(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("The largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}

int removeDigit(int num, int pos) {
    int power = 1;
    for (int i = 0; i < pos; i++) {
        power *= 10;
    }
    int leftPart = num / (power * 10);
    int rightPart = num % power;
    return (leftPart * power) + rightPart;
}

int findLargestNumber(int num) {
    int largest = 0;
    for (int i = 0; i < 4; i++) {
        int removedNumber = removeDigit(num, i);
        if (removedNumber > largest) {
            largest = removedNumber;
        }
    }
    return largest;
}