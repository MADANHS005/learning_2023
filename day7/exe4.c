#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortArray(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the positions of students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayArray(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
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

    printf("Before sorting:\n");
    displayArray(students, size);

    sortArray(students, size);

    printf("After sorting:\n");
    displayArray(students, size);

    return 0;
}