#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(const char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start <= end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char str1[] = "hello";
    char str2[] = "level";
    
    if (isPalindrome(str1)) {
        printf("%s is a palindrome.\n", str1);
    } else {
        printf("%s is not a palindrome.\n", str1);
    }
    
    if (isPalindrome(str2)) {
        printf("%s is a palindrome.\n", str2);
    } else {
        printf("%s is not a palindrome.\n", str2);
    }
    
    return 0;
}