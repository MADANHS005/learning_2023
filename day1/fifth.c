#include <stdio.h>

int bitOperations(int num, int operationType) {
    int result;

    switch (operationType) {
        case 1: 
            result = num | (1 << 0);
            break;
        case 2: 
            result = num & ~(1 << 31);
            break;
        case 3: 
            result = num ^ (1 << 15);
            break;
        default:
            printf("Invalid operation type\n");
            return num; 
    }

    return result;
}

int main() {
    int num, operationType;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    int result = bitOperations(num, operationType);

    printf("Result: %d\n", result);

    return 0;
}