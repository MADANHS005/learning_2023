<<<<<<< HEAD
#include <stdio.h>

// Structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};
typedef struct Time Time;
 void calculateTimeDifference(startTime, endTime);


// Function to calculate the difference between two time periods
 void calculateTimeDifference( Time startTime,  Time endTime) {
     Time difference;
    int startTimeInSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endTimeInSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;
    
    difference.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    difference.minutes = differenceInSeconds / 60;
    difference.seconds = differenceInSeconds % 60;
    // Print the difference
    printf("Time difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    
}

int main() {
     Time startTime, endTime;

    // Read the start time
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Read the end time
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference
    calculateTimeDifference(startTime, endTime);


=======
#include<stdio.h>
int sumAlternateElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumAlternateElements(arr, size);
    printf("Sum of alternate elements: %d\n", sum);
    
>>>>>>> origin/main
    return 0;
}