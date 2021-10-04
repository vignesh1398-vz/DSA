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

/* Finds the middle node of the list */
void returnMiddleNode(Node *head) {
    Node *slow = head, *fast = head;

    if(!head) {
        cout << "List is empty";
        return;
    }

    while(fast && fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element is :" << slow->data << endl;
}

int main(int argc, char** argv) {

    insertValueAtEnd(10);
    insertValueAtEnd(20);
    insertValueAtEnd(30);
    // insertValueAtEnd(40);
    // insertValueAtEnd(50);

    displayList(head);

    returnMiddleNode(head);

    return 0;
}