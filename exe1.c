#include<stdio.h>
int main(){
    double x;
    printf("enter the exponent value :");
    scanf("%.2f\n",&x);
     unsigned long long bits = *(unsigned long long *)&x;
    unsigned int exponent = (bits >> 52) & 0x7FF;

    // Printing in hexadecimal format
    printf("Exponent (hex): %X\n", exponent);
    
    // Printing in binary format
    printf("Exponent (binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");



    return 0;
}