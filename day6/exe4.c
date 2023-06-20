#include<stdio.h>
<<<<<<< HEAD
#include<stdlib.h>

struct Student
{
    int rollnum;
    char name[30];
    float marks;
};
typedef struct Student Student;


int main(){
    Student *ptr;
    ptr= (Student*)calloc(2,sizeof(Student));
    Student s1={10,"Madan",98.0};
    Student s2={11,"Mohan",95.0};
    ptr[0]=s1;
    ptr[1]=s2;
    printf("Student1 data %d  %s  %.2f\n",ptr[0].rollnum,ptr[0].name,ptr[0].marks);
    printf("Student2 data %d  %s  %.2f\n",ptr[1].rollnum,ptr[1].name,ptr[1].marks);
    free(ptr);


    return 0;
}
=======

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
    return 0;
}
>>>>>>> origin/main
