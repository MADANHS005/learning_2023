#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[20];
    float temperature;
    int humidity;
    int light;
    char timestamp[20];
};

void extractLogEntries(const char* filename, struct LogEntry logEntries[], int* numEntries) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening %s\n", filename);
        return;
    }

    char line[256];
    *numEntries = 0;

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strlen(line) <= 1) {  // Skip empty lines
            continue;
        }

        char* token;
        token = strtok(line, ",");

        logEntries[*numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[*numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[*numEntries].timestamp, token);

        (*numEntries)++;

        if (*numEntries >= MAX_ENTRIES) {
            break;  // Reached maximum capacity of logEntries array
        }
    }

    fclose(file);
}

void displayLogEntries(const struct LogEntry logEntries[], int numEntries) {
    printf("Log Entries:\n");
    printf("--------------------------------------------------\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNo,
               logEntries[i].sensorNo,
               logEntries[i].temperature,
               logEntries[i].humidity,
               logEntries[i].light,
               logEntries[i].timestamp);
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    extractLogEntries("data.csv", logEntries, &numEntries);
    displayLogEntries(logEntries, numEntries);

    return 0;
}