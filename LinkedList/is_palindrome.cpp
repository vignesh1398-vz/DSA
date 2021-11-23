#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

Node *head = NULL;

bool isOdd(int n) {
    return ((n % 2) == 1);
}

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

/* Check if the given list is a palindrome or not */
bool isPalindrome() {
    int slowCount = 1;
    stack <int> st;
    Node *slow = head, *fast = head;
    
    if(!head) {
        return false;
    }

    while(fast && fast->next && fast->next->next) {
        st.push(slow->data);
        slow = slow->next;
        slowCount++;

        fast = fast->next->next;
    }

    if(isOdd(slowCount)) {
        st.pop();
    }

    while(slow && slow->next) {
        slow = slow->next;

        if(st.top() != slow->data) {
            return false;
        }

        st.pop();
    }

    if(st.top() != slow->data) {
        return false;
    }

    return true;
}

int main(int argc, char** argv) {

    insertValueAtEnd(10);
    insertValueAtEnd(20);
    insertValueAtEnd(30);
    insertValueAtEnd(20);
    insertValueAtEnd(10);

    displayList(head);

    cout << isPalindrome();

    return 0;
}