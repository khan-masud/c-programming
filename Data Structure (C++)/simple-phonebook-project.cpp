#include <iostream>
#include <string>

using namespace std;

// Constants
const int MAX_CONTACTS = 100;

// Arrays to store contact details
string names[MAX_CONTACTS];
string phoneNumbers[MAX_CONTACTS];
int contactCount = 0;

// Function to add a new contact
void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        cout << "Contact book is full!" << endl;
        return;
    }

    string name, phoneNumber;
    cout << "Enter contact name: ";
    cin >> name;
    cout << "Enter contact phone number: ";
    cin >> phoneNumber;

    names[contactCount] = name;
    phoneNumbers[contactCount] = phoneNumber;
    contactCount++;

    cout << "Contact added!" << endl;
}

// Function to display all contacts
void displayContacts() {
    cout << "\n--- Contact List ---" << endl;
    for (int i = 0; i < contactCount; ++i) {
        cout << i + 1 << ". Name: " << names[i] << ", Phone: " << phoneNumbers[i] << endl;
    }
    cout << "--------------------" << endl;
}

// Function to search for a contact by name
void searchContact() {
    string searchName;
    cout << "Enter the name to search for: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < contactCount; ++i) {
        if (names[i] == searchName) {
            cout << "Contact found: Name: " << names[i] << ", Phone: " << phoneNumbers[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

// Function to delete a contact by name
void deleteContact() {
    string deleteName;
    cout << "Enter the name of the contact to delete: ";
    cin >> deleteName;

    bool found = false;
    for (int i = 0; i < contactCount; ++i) {
        if (names[i] == deleteName) {
            found = true;
            // Shift contacts down
            for (int j = i; j < contactCount - 1; ++j) {
                names[j] = names[j + 1];
                phoneNumbers[j] = phoneNumbers[j + 1];
            }
            contactCount--;
            cout << "Contact deleted." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\nSimple Contact Book Application" << endl;
        cout << "1. Add a new contact" << endl;
        cout << "2. Display all contacts" << endl;
        cout << "3. Search for a contact" << endl;
        cout << "4. Delete a contact" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}
