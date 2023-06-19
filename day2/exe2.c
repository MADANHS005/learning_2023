#include<stdio.h>
void swap(void *a, void *b, size_t size) {
    char *ptr_a = (char *)a;
    char *ptr_b = (char *)b;
    
    for (size_t i = 0; i < size; i++) {
        char temp = *(ptr_a + i);
        *(ptr_a + i) = *(ptr_b + i);
        *(ptr_b + i) = temp;
    }
}

int main() {
    int a = 5;
    int b = 10;
    
    printf("Before swaping: a = %d, b = %d\n", a, b);
    
    swap(&a, &b, sizeof(int));
    
    printf("After swaping: a = %d, b = %d\n", a, b);
    
    return 0;
}