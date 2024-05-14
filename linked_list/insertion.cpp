#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(int data) {
        this->data = data;
        this->next = nullptr; // Use nullptr instead of NULL
    }
};

// Function to insert a new node at the beginning of the linked list
void insertAtNode(Node* &head, int d) {
    Node* temp = new Node(d); // Create a new node
    temp->next = head; // Set the next of the new node to the current head
    head = temp; // Update the head to point to the new node
}

// Function to print the linked list
void print(Node* head) { // No need to pass head by reference
    Node* temp = head;
    while (temp != nullptr) { // Use nullptr instead of NULL
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Add a newline after printing the list
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1; // Assign the first node to head

    print(head); // Print the list before insertion
    insertAtNode(head, 12); // Insert a new node at the beginning
    print(head); // Print the list after inserting 12
    insertAtNode(head, 15); // Insert another node at the beginning
    print(head); // Print the list after inserting 15

    return 0;
}
