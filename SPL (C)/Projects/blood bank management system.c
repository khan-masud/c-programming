#include <stdio.h>
#include <string.h>

#define MAX_DONORS 100
#define MAX_RECIPIENTS 100

struct Date {
    int day;
    int month;
    int year;
};

struct Donor {
    char name[50];
    char blood_group[4];
    int phone;
    struct Date last_donation_date;
};

struct Recipient {
    char name[50];
    int phone;
    char blood_group[4];
};

struct Donor donors[MAX_DONORS];
int num_donors = 0;

struct Recipient recipients[MAX_RECIPIENTS];
int num_recipients = 0;

void add_donor() {
    if (num_donors < MAX_DONORS) {
        struct Donor new_donor;
        printf("Enter Donor Name: ");
        scanf("%s", new_donor.name);
        printf("Enter Blood Group (Ex : A+): ");
        scanf("%s", new_donor.blood_group);
        printf("Enter Phone Number: ");
        scanf("%d", &new_donor.phone);
        printf("Enter Last Donation Date (DD MM YYYY): ");
        scanf("%d %d %d", &new_donor.last_donation_date.day,
              &new_donor.last_donation_date.month,
              &new_donor.last_donation_date.year);
        donors[num_donors++] = new_donor;
        printf("-----------------------------------------------------\n");
        printf("Donor Added Successfully.\n");
        printf("-----------------------------------------------------\n");
    } else {
        printf("-----------------------------------------------------\n");
        printf("Maximum Donors Reached.\n");
        printf("-----------------------------------------------------\n");
    }
}

void display_donors() {
    printf("-----------------------------------------------------\n");
    printf("Donors:\n");
    int foundDonor = 0;
    for (int i = 0; i < num_donors; ++i) {
        foundDonor = 1;
        printf("%d. Name: %s, Blood Group: %s, Phone Number: 0%d, Last Donation Date: %d-%d-%d\n", i + 1,
               donors[i].name, donors[i].blood_group, donors[i].phone,
               donors[i].last_donation_date.day, donors[i].last_donation_date.month,
               donors[i].last_donation_date.year);
    }
     if (!foundDonor) {
        printf("No Donors Found.\n");
        printf("-----------------------------------------------------\n");
    }
    printf("-----------------------------------------------------\n");
}

void add_recipient() {
    if (num_recipients < MAX_RECIPIENTS) {
        struct Recipient new_recipient;
        printf("Enter Recipient Name: ");
        scanf("%s", new_recipient.name);
        printf("Enter Blood Group (Ex : A+): ");
        scanf("%s", new_recipient.blood_group);
        printf("Enter Phone Number: ");
        scanf("%d", &new_recipient.phone);
        recipients[num_recipients++] = new_recipient;
        printf("-----------------------------------------------------\n");
        printf("Recipient Added Successfully.\n");
        printf("-----------------------------------------------------\n");
    } else {
        printf("-----------------------------------------------------\n");
        printf("Maximum Recipients Reached.\n");
        printf("-----------------------------------------------------\n");
    }
}

void display_recipients() {
    printf("-----------------------------------------------------\n");
    printf("Recipients:\n");
    int foundRecipient = 0;
    for (int i = 0; i < num_recipients; ++i) {
        foundRecipient = 1;
        printf("%d. Name: %s, Blood Group: %s, Phone Number: 0%d\n", i + 1,
               recipients[i].name, recipients[i].blood_group, recipients[i].phone);
    }
     if (!foundRecipient) {
        printf("No Recipients Found.\n");
        printf("-----------------------------------------------------\n");
    }
}

void search_donors(char blood_group[]) {
    printf("-----------------------------------------------------\n");
    printf("Donors With Blood Group %s:\n", blood_group);
    int found = 0;
    for (int i = 0; i < num_donors; ++i) {
        if (strcmp(donors[i].blood_group, blood_group) == 0) {
            found = 1;
            printf("Name: %s, Last Donation Date: %d-%d-%d, Phone Number: 0%d\n",
                   donors[i].name, donors[i].last_donation_date.day,
                   donors[i].last_donation_date.month, donors[i].last_donation_date.year, donors[i].phone);
        }
    }
    if (!found) {
        printf("No Donors Found With Blood Group %s.\n", blood_group);
        printf("-----------------------------------------------------\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nBlood Bank Management System\n");
        printf("-----------------------------------------------------\n");
        printf("1. Add Donor\n");
        printf("2. View All Donors\n");
        printf("3. Add Recipient\n");
        printf("4. View All Recipients\n");
        printf("5. Search Donors by Blood Group\n");
        printf("6. Exit\n");
        printf("-----------------------------------------------------\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_donor();
                break;
            case 2:
                display_donors();
                break;
            case 3:
                add_recipient();
                break;
            case 4:
                display_recipients();
                break;
            case 5: {
                char blood_group[4];
                printf("Enter Blood Group To Search (Ex : A+): ");
                scanf("%s", blood_group);
                search_donors(blood_group);
                break;
            }
            case 6:
                printf("Exiting Program.\n");
                break;
            default:
                printf("-----------------------------------------------------\n");
                printf("Invalid Choice. Please Try Again.\n");
                printf("-----------------------------------------------------\n");
        }
    } while (choice != 6);

    return 0;
}

