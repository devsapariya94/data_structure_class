#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Rate Of per Kilometer
int type1SeatRate = 100;
int type2SeatRate = 150;
int type3SeatRate = 200;

int type1Sleeper = 200;
int type2Sleeper = 250;
int type3Sleeper = 300;

int type1Acsleeper = 300;
int type2Acsleeper = 350;
int type3Acsleeper = 400;

// Struct of Train Details
struct trainDetails
{
    int trainNo;
    char trainName[20];
    char source[20];
    char destination[20];
    int seats;
    int sleeper;
    int AcSleeper;
    int distance;
    int type;
};

// For linked list
struct train
{
    struct trainDetails details;
    struct train *next;
};

struct train *head = NULL;

void addTrain(struct trainDetails details); // for adding train
void displayTrain();                        // for displaying train
struct trainDetails getTrainDetails();      // for getting train details
void deleteTrain();                         // for deleting train
void adminMenu();                           // for admin menu
void main();                                // for main menu
void searchTrain();                         // for searching train

// For pause the Program
void pause(void)
{
    printf("Press any key to continue...");
    fflush(stdin);
    getchar();
}

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
    printf("Train added successfully\n");
    pause();
}

void displayTrain()
{
    system("cls");
    struct train *temp = head;
    system("cls");
    printf("Displaying all trains\n");
    while (temp != NULL)
    {
        printf("Train No: %d\n", temp->details.trainNo);
        printf("Train Name: %s\n", temp->details.trainName);
        printf("Source: %s\n", temp->details.source);
        printf("Destination: %s\n", temp->details.destination);
        printf("Seats: %d\n", temp->details.seats);
        printf("Sleeper: %d\n", temp->details.sleeper);
        printf("AC Sleeper: %d\n", temp->details.AcSleeper);
        printf("Distance: %d\n", temp->details.distance);
        printf("Type: %d\n", temp->details.type);
        temp = temp->next;
        printf("-----------------------------------------------------\n");
    }
    pause();
}

struct trainDetails getTrainDetails()
{
    system("cls");
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
    scanf("%d", &details.AcSleeper);
    printf("Enter Distance: ");
    scanf("%d", &details.distance);
    printf("Enter Type: ");
    scanf("%d", &details.type);
    return details;
}

void deleteTrain()
{
    system("cls");
    displayTrain();
    int trainNo;
    printf("\nWhich train do you want to delete? ");
    printf("\nEnter Train No: ");
    scanf("%d", &trainNo);
    struct train *temp = head;
    struct train *prev = NULL;
    while (temp != NULL)
    {
        if (temp->details.trainNo == trainNo)
        {
            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
}

void adminMenu()
{
    int choice;
    int trainNo;
    struct trainDetails details;
    do
    {
        system("cls");
        printf("1. Add Train\n");
        printf("2. Delete Train\n");
        printf("3. Display Train\n");
        printf("4. Return To Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            details = getTrainDetails();
            addTrain(details);
            break;
        case 2:
            deleteTrain();
            break;
        case 3:
            displayTrain();
            break;
        case 4:
            main();
            break;
        default:
            printf("Invalid choice");
            pause();
            break;
        }
    } while (choice != 4);
}

void searchTrain(){
    system("cls");
    char source[20];
    char destination[20];
    printf("Enter Source: ");
    scanf("%s", source);
    printf("Enter Destination: ");
    scanf("%s", destination);
    struct train *temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->details.source, source) == 0 && strcmp(temp->details.destination, destination) == 0)
        {
            printf("Train No: %d\n", temp->details.trainNo);
            printf("Train Name: %s\n", temp->details.trainName);
            printf("Source: %s\n", temp->details.source);
            printf("Destination: %s\n", temp->details.destination);
            printf("Seats: %d\n", temp->details.seats);
            printf("Sleeper: %d\n", temp->details.sleeper);
            printf("AC Sleeper: %d\n", temp->details.AcSleeper);
            printf("Distance: %d\n", temp->details.distance);
            printf("Type: %d\n", temp->details.type);
            printf("-----------------------------------------------------\n");
        }
        temp = temp->next;
    }
    pause();
}

void main()
{
    while (1)
    {
        system("cls");
        int choice;

        printf("1. Book Train\n");
        printf("2. Search Train\n");
        printf("3. Cancel Train Ticket\n");
        printf("4. Check Ticket Status\n");
        printf("5. Admin Menu\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        int pass = 0;
        switch (choice)
        {
        case 1:
            // bookTrain();
            break;
        case 2:
            searchTrain();
            break;
        case 3:
            // cancelTrainTicket();
            break;
        case 4:
            // checkTicketStatus();
            break;
        case 5:
            printf("Enter password: ");
            scanf("%d", &pass);
            if (pass == 1234)
            {
                adminMenu();
            }
            else
            {
                printf("Invalid password");
                pause();
            }
            break;
        case 6:
            exit(0);
            break;
        }
    }
}