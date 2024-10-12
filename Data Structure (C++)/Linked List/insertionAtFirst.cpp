#include <iostream>
using namespace std;

struct Node // Making a structure for using multi variable in a single
{
    int data; // For storing integer value
    Node* next; // For storing address of next node

        Node(int newData) // For storing new data
        {
            data = newData;
            next = nullptr; // nullptr for ignoring garbage value
        }
};

Node* insertAtFirst(Node *head, int newData)
{
    Node* newNode = new Node(newData);

    newNode->next = head;

    return newNode;
}

void printList(Node* head)
{
    Node* current = head;

    while(current != nullptr)
    {
        cout << " " << current->data;

        current = current->next;
    }

    cout << endl;
}

int main ()
{
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    cout << "Original Linked List : ";
    printList(head);

    cout << "After Inserting At First Node : " << endl;
    int data = 1;
    head = insertAtFirst(head, data);
    printList(head);

    return 0;

}
