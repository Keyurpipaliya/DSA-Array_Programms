// Write an program of Head and Node and Pointer of doublyLinkedList
#include <iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// insert in next

void insertEnd(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp -> next;
    }

    temp->next = newNode;
    newNode ->prev = temp;
}

// Forward Traversal

void showForward(Node * head){
    Node* temp = head;
}

while (temp != NULL){
    cout<< temp->data << "<->";
    temp = temp->next;
}

cout<< "NULL";

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);

    cout<< "Forward: ";
    showForward(head);

    cout<< "Backward: ";
    showForward(head);

    return 0;

}