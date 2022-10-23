#include <stdio.h>
#include <stdlib.h>

struct trainDetails
{
    int trainNo;
    char trainName[20];
    char source[20];
    char destination[20];
    int seats;
    int sleeper;
    int Acsleeper;
    int distance;
};
int i;
// Array of Struct trainDetails of dynemic size
struct trainDetails *train;

// Function to add train details
void addTrain()
{
       train = (struct trainDetails *)malloc((i+1) * sizeof(struct trainDetails));
        printf("Enter the train number: ");
        scanf("%d", &train[i].trainNo);
        printf("Enter the train name: ");
        scanf("%s", train[i].trainName);
        printf("Enter the source: ");
        scanf("%s", train[i].source);
        printf("Enter the destination: ");
        scanf("%s", train[i].destination);
        printf("Enter the number of seats: ");
        scanf("%d", &train[i].seats);
        printf("Enter the number of sleeper seats: ");
        scanf("%d", &train[i].sleeper);
        printf("Enter the number of AC sleeper seats: ");
        scanf("%d", &train[i].Acsleeper);
        printf("Enter the distance: ");
        scanf("%d", &train[i].distance);
        printf("Train Added Successfully\n");
        i++;
}

// Function to display train details
void displayTrain()
{
    for (int j = 0; j < i; j++)
    {
        system("cls");
        printf("Train number: %d\n", train[j].trainNo);
        printf("Train name: %s\n", train[j].trainName);
        printf("Source: %s\n", train[j].source);
        printf("Destination: %s\n", train[j].destination);
        printf("Number of seats: %d\n", train[j].seats);
        printf("Number of sleeper seats: %d\n", train[j].sleeper);
        printf("Number of AC sleeper seats: %d\n", train[j].Acsleeper);
        printf("Distance: %d\n", train[j].distance);
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("1. Add Train Details\n");
        printf("2. Display Train Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addTrain();
            break;
        case 2:

            displayTrain();
            break;
        case 3:

            exit(0);
            break;
        default:

            printf("Invalid Choice/n");
        }
    }
}
