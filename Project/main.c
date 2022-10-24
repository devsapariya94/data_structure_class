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

struct train
{
    struct trainDetails details;
    struct train *next;
};

struct train *head = NULL;

void addTrain(struct trainDetails details)
{
    struct train *newTrain = (struct train *)malloc(sizeof(struct train));
    newTrain->details = details;
    newTrain->next = NULL;
    if (head == NULL)
    {
        head = newTrain;
    }
    else
    {
        struct train *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newTrain;
    }
}

void displayTrain()
{
    struct train *temp = head;
    while (temp != NULL)
    {
        printf("Train No: %d\n", temp->details.trainNo);
        printf("Train Name: %s\n", temp->details.trainName);
        printf("Source: %s\n", temp->details.source);
        printf("Destination: %s\n", temp->details.destination);
        printf("Seats: %d\n", temp->details.seats);
        printf("Sleeper: %d\n", temp->details.sleeper);
        printf("AC Sleeper: %d\n", temp->details.Acsleeper);
        printf("Distance: %d\n", temp->details.distance);
        temp = temp->next;
    }
}

struct trainDetails getTrainDetails()
{
    struct trainDetails details;
    printf("Enter Train No: ");
    scanf("%d", &details.trainNo);
    printf("Enter Train Name: ");
    scanf("%s", details.trainName);
    printf("Enter Source: ");
    scanf("%s", details.source);
    printf("Enter Destination: ");
    scanf("%s", details.destination);
    printf("Enter Seats: ");
    scanf("%d", &details.seats);
    printf("Enter Sleeper: ");
    scanf("%d", &details.sleeper);
    printf("Enter AC Sleeper: ");
    scanf("%d", &details.Acsleeper);
    printf("Enter Distance: ");
    scanf("%d", &details.distance);
    return details;
}

void main()
{
    while (1)
    {
        int choice;
        printf("1. Add Train\n");
        printf("2. Display Train\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            struct trainDetails details = getTrainDetails();
            addTrain(details);
            break;
        }
        case 2:
        {
            displayTrain();
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
        {
            printf("Invalid Choice\n");
        }
        }
    }
}
