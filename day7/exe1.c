#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;

void parseString(const char* input, Student* students, int size) {
    char temp[20];
    int index = 0;

    sscanf(input, "%d %s %f", &(students[index].rollno), temp, &(students[index].marks));
    strcpy(students[index].name, temp);
}

int main() {
    int noofstud;
    printf("Enter the number of students: ");
    scanf("%d", &noofstud);

    // Dynamically allocate memory for the array of structures
    struct Student* students = malloc(noofstud * sizeof( Student));

    getchar(); // Clear the newline character from the input buffer

    for (int i = 0; i < noofstud; i++) {
        char input[50];
        printf("Enter student %d details (rollno name marks): ", i + 1);
        fgets(input, sizeof(input), stdin);
        parseString(input, &(students[i]), 1);
    }

    for (int i = 0; i < noofstud; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}