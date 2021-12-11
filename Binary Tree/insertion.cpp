#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    if(!newNode) {
        cout << "Memory full" << endl;
        return NULL;
    }
    newNode->data = value;
    newNode->left = newNode->right = NULL;

    return newNode;
}

void inorder(Node* root) {
    if(!root) return ;
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}


int main(int argc, char** argv) {
    Node* root = createNode(10);
    root->left = createNode(20);
    root->left->left = createNode(40);
    root->right = createNode(30);

    cout << "Inserted everything" << endl;

    inorder(root);

    return 0;
}