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

/* Inserts a new node in the front of the list */
void insertValueAtBeginning(int value) {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    cout << "Inserted : " << value << endl;
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

/* Delete node by value */
void deleteNode(int value) {

    Node *prev = NULL, *current = head;
    if(!current) {
        cout << "No nodes in the list";    
        return;
    }

    /* If the node to be deleted is the head node */
    if(current && current->data == value) {
        if(current->next) {
            head = current->next;
        }

        current->next = NULL;
        delete current;
    }

    /* If the node to be deleted is in the middle */
    else {
        while(current && current->data != value) {
            prev = current;
            current = current->next;
        }

        if(current->data != value) {
            cout << "Sorry the value is not present in the list";
            return;
        }

        prev->next = current->next;
        delete current;
    }


    cout << "Deleted: " << value << endl;
}

void deleteList() {
    Node *current = head, *prev = head;
    if(!current) {
        cout << "The list is empty" << endl;
        return;
    }

    head = NULL;
    while(current && current->next) {
        prev = current;
        current = current->next;

        cout << "Deleting : " << prev->data << endl;
        free(prev);
    }
    
    cout << "Deleting : " << current->data << endl;
    delete current;

    cout << "Deleted the whole list" << endl;
}

int main(int argc, char** argv) {
    displayList(head);

    insertValueAtBeginning(20);
    insertValueAtBeginning(10);

    insertValueAtEnd(30);
    insertValueAtEnd(30);

    displayList(head);

    // deleteNode(10);
    // deleteNode(30);
    // deleteNode(30);
    // deleteNode(20);

    deleteList();

    //insertValueAtBeginning(10);
    displayList(head);

    return 0;
}