#include <stdio.h>
#include<string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchbynam(const struct Student* students, int size, const char* name) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    struct Student students[5] = {
        {1001, "Jon", 95.5},
        {1002, "lice", 92.0},
        {1003, "Bab", 79.3},
        {1004, "Sara", 98.7},
        {1005, "Mikke", 91.2}
    };

    int size = sizeof(students) / sizeof(students[0]);

    char searchname[20];
    printf("Enter the name to search :");
    scanf("%s",searchname);
    searchbynam(students,size,searchname);

    return 0;
}