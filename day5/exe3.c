#include <stdio.h>
#include <string.h>

void rotateString(char *str, int positions) {
    int len = strlen(str);
    
    // Adjust the number of positions if it exceeds the length of the string
    positions = positions % len;
    
    // Rotate the string by shifting characters
    for (int i = 0; i < positions; i++) {
        char temp = str[0];
        
        for (int j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];
        }
        
        str[len - 1] = temp;
    }
}

int main() {
    char str[100];
    int positions;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);
    
    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original string: %s\n", str);
    
    rotateString(str, positions);
    
    printf("Rotated string: %s\n", str);
    
    return 0;
}