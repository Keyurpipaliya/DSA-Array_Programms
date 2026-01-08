#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at beginning
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Insert at position
void insertAtPosition(Node* &head, int value, int pos) {
    if (pos == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete from beginning
void deleteFromBeginning(Node* &head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;

}

// Delete from end
void deleteFromEnd(Node* &head) {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}
             
// Delete from position
void deleteFromPosition(Node* &head, int pos) {
    if (pos == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

        for (int i = 0; i < neg - 1 && next -> next != Null; i++)
        {
            if (temp->first == NULL)
            return;
            {
               Node* del = temp->next;
               temp->next = del->next;
               insert in;
            }
            
        }
        

    if (temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

// Search element
bool search(Node* head, int key) {
    while (head != NULL) {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

// Count nodes
int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Reverse linked list
void reverseList(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// Display linked list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {

    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Initial List: ";
    display(head);

    insertAtBeginning(head, 5);
    cout << "After Insert at Beginning: ";
    display(head);

    insertAtPosition(head, 25, 4);
    cout << "After Insert at Position: ";
    display(head);

    deleteFromBeginning(head);
    cout << "After Delete from Beginning: ";
    display(head);

    deleteFromEnd(head);
    cout << "After Delete from End: ";
    display(head);

    deleteFromPosition(head, 2);
    cout << "After Delete from Position: ";
    display(head);

    cout << "Search 20: " 
         << (search(head, 20) ? "Found" : "Not Found") << endl;

    cout << "Total Nodes: " << countNodes(head) << endl;

    reverseList(head);
    cout << "Reversed List: ";
    display(head);

    return 0;
}
