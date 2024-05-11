#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    void prepend(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void displayList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void append(int value)
    {
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
};

int main(int argc, char **argv)
{
    LinkedList *ll = new LinkedList(2); // 2
    ll->prepend(1);                     // 1->2
    ll->append(3);                      // 1->2->3
    ll->displayList();
    return 0;
}