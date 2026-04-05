#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure for support ticket
struct Ticket {
    int id;
    char name[50];
    char issue[100];
    char status[20];
};

struct Ticket tickets[MAX];
int count = 0;

// Create Ticket
void createTicket() {
    printf("\nEnter Ticket ID: ");
    scanf("%d", &tickets[count].id);
    getchar();

    printf("Enter Customer Name: ");
    fgets(tickets[count].name, 50, stdin);

    printf("Enter Issue: ");
    fgets(tickets[count].issue, 100, stdin);

    strcpy(tickets[count].status, "Open");

    count++;
    printf("\n✅ Ticket Created Successfully!\n");
}

// View Tickets
void viewTickets() {
    if (count == 0) {
        printf("\nNo tickets available.\n");
        return;
    }

    printf("\n--- Ticket List ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d", tickets[i].id);
        printf("Name: %s", tickets[i].name);
        printf("Issue: %s", tickets[i].issue);
        printf("Status: %s\n", tickets[i].status);
    }
}

// Update Ticket Status
void updateTicket() {
    int id, found = 0;
    printf("\nEnter Ticket ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tickets[i].id == id) {
            printf("Enter new status (Open/Closed/In Progress): ");
            scanf("%s", tickets[i].status);
            printf("\n✅ Ticket Updated!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\n❌ Ticket not found.\n");
}

// Delete Ticket
void deleteTicket() {
    int id, found = 0;
    printf("\nEnter Ticket ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tickets[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                tickets[j] = tickets[j + 1];
            }
            count--;
            printf("\n🗑️ Ticket Deleted!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\n❌ Ticket not found.\n");
}

// Main Menu
int main() {
    int choice;

    while (1) {
        printf("\n===== Customer Support System =====\n");
        printf("1. Create Ticket\n");
        printf("2. View Tickets\n");
        printf("3. Update Ticket\n");
        printf("4. Delete Ticket\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createTicket(); break;
            case 2: viewTickets(); break;
            case 3: updateTicket(); break;
            case 4: deleteTicket(); break;
            case 5: 
                printf("\nExiting...\n");
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}