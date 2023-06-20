<<<<<<< HEAD
#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    double real;
    double imag;
};
typedef struct Complex Complex;

// Function to read a complex number from the user
 Complex readComplex() {
    struct Complex num;
    printf("Enter the real part: ");
    scanf("%lf", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &num.imag);
    return num;
}

// Function to write a complex number
void writeComplex( Complex num) {
    printf(" %.2f + %.2fi\n", num.real, num.imag);
}

// Function to add two complex numbers
 Complex addComplex( Complex num1,  Complex num2) {
     Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

// Function to multiply two complex numbers
 Complex multiplyComplex( Complex num1, Complex num2) {
     Complex product;
    product.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    product.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return product;
}

int main() {
     Complex num1, num2, sum, product;

    // Read the first complex number
    printf("Enter the first complex number:\n");
    num1 = readComplex();

    // Read the second complex number
    printf("Enter the second complex number:\n");
    num2 = readComplex();

    // Write the complex numbers
    printf("Complex numbers entered:");
    writeComplex(num1);
    writeComplex(num2);

    // Perform addition
    sum = addComplex(num1, num2);
    printf("Sum of the complex numbers:");
    writeComplex(sum);

    // Perform multiplication
    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers:");
    writeComplex(product);

=======
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
    
>>>>>>> origin/main
    return 0;
}