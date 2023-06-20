<<<<<<< HEAD
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapFields(struct Point *ptr1, struct Point *ptr2) {
    int temp;

    // Swap x values
    temp = ptr1->x;
    ptr1->x = ptr2->x;
    ptr2->x = temp;

    // Swap y values
    temp = ptr1->y;
    ptr1->y = ptr2->y;
    ptr2->y = temp;
}

int main() {
    struct Point p1 = {1, 2};
    struct Point p2 = {3, 4};

    printf("Before swapping:\n");
    printf("p1: x=%d, y=%d\n", p1.x, p1.y);
    printf("p2: x=%d, y=%d\n", p2.x, p2.y);

    // Pass the addresses of p1 and p2 to swapFields function
    swapFields(&p1, &p2);

    printf("\nAfter swapping:\n");
    printf("p1: x=%d, y=%d\n", p1.x, p1.y);
    printf("p2: x=%d, y=%d\n", p2.x, p2.y);

=======
#include<stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int a[3] = {0x1, 0xF4, 0x10001};
    int size= sizeof(a) / sizeof(a[0]);

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);
>>>>>>> origin/main
    return 0;
}