#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
    
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}