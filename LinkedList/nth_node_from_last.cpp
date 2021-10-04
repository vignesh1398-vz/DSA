#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

Node *head = NULL;

/* Prints the contents of the list */
void displayList(Node * head) {
    Node *current = head;
    
    if(current == NULL) {
        cout << "List is empty as of now" << endl;
    }

    while(current != NULL) {
        cout << current->data << "->";
        current = current->next;
    }

    if(head) {
        cout << endl;
    }
}

/* Insert value at the end */
void insertValueAtEnd(int value) {
    Node *last = head;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    /* If list is empty */
    if(head == NULL) {
        head = newNode;
    }

    else {
        while(last->next) {
            last = last->next;
        }

        last->next = newNode;
    }

    cout << "Inserted: " << value << endl;
}

/* Nth node from the end of the list */
void nthNodeFromLast(int n) {
    Node *slow = head, *fast = head;
    while(fast && fast->next) {
        if(n == 0) {
            slow = slow->next;
        }
        else {
            n--;
        }

        fast=fast->next;
    }

    if(n) {
        cout << "The list is to small for the given range" << endl;
        return;
    }

    cout << "Middle node: " << slow->data << endl; 
}

int main(int argc, char** argv) {

    insertValueAtEnd(10);
    insertValueAtEnd(20);
    insertValueAtEnd(30);
    insertValueAtEnd(40);
    insertValueAtEnd(50);

    displayList(head);

    nthNodeFromLast(2);

    return 0;
}