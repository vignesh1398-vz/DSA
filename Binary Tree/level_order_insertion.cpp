#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* insert(int data) {
    Node* newNode = new Node();
    if(!newNode) {
        cout << "Memory full" << endl;
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    
    return newNode;
}

Node* levelOrderInsert(Node* root, int data) {
    if(!root) {
        root = insert(data);
    }
    else {
        queue <Node*> q;
        q.push(root);

        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();
            if(!temp->left) {
                temp->left = insert(data);
                break;
            }
            q.push(temp->left);
            if(!temp->right) {
                temp->right = insert(data);
                break;
            }
            q.push(temp->right);
        }
    }

    return root;
}

void inorder(Node* root) {
    if(!root) return ;
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

int main(int argc, char** argv) {
    Node* root;
    root = levelOrderInsert(root, 10);
    root = levelOrderInsert(root, 20);
    root = levelOrderInsert(root, 30);

    inorder(root);

    return 0;
}