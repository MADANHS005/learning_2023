#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpperCase(FILE* src, FILE* dest) {
    int c;
    while ((c = fgetc(src)) != EOF) {
        fputc(toupper(c), dest);
    }
}

void convertToLowerCase(FILE* src, FILE* dest) {
    int c;
    while ((c = fgetc(src)) != EOF) {
        fputc(tolower(c), dest);
    }
}

void convertToSentenceCase(FILE* src, FILE* dest) {
    int c;
    int previous = '.';
    while ((c = fgetc(src)) != EOF) {
        if (previous == '.' || previous == '\n' || previous == '!' || previous == '?') {
            fputc(toupper(c), dest);
        } else {
            fputc(tolower(c), dest);
        }
        previous = c;
    }
}

void copyFile(FILE* src, FILE* dest) {
    int c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dest);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: %s [option] source_file destination_file\n", argv[0]);
        printf("Options:\n");
        printf("-u: Convert file content to Upper Case\n");
        printf("-l: Convert file content to Lower Case\n");
        printf("-s: Convert file content to Sentence Case\n");
        printf("No option: Perform a normal copy\n");
        return 1;
    }

    char* option = argv[1];
    char* file1 = argv[2];
    char* destFile = argv[3];

    FILE* src = fopen(file1, "r");
    FILE* dest = fopen(destFile, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        convertToUpperCase(src, dest);
    } else if (strcmp(option, "-l") == 0) {
        convertToLowerCase(src, dest);
    } else if (strcmp(option, "-s") == 0) {
        convertToSentenceCase(src, dest);
    } else {
        copyFile(src, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}