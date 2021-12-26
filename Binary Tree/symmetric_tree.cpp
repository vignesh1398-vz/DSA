#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if(!newNode) {
        cout << "Memory full" << endl;
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;

    return newNode;
}

Node* level_order_insert(Node* root, int data) {
    if(!root) {
        root = createNode(10);
    }
    else {
        Node* temp;
        queue<Node*>q;
        q.push(root);
        
        /* Tree BFS to find the right spot for insertions */
        while(!q.empty()) {
            temp = q.front();
            q.pop();

            if(!temp->left) {
                temp->left = createNode(data);
                break;
            }
            if(!temp->right) {
                temp->right = createNode(data);
                break;
            }
            q.push(temp->left);
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

bool is_symmetric(Node* root) {
    if(!root) return true;
    if((!root->left && root->right) || (root->right && !root->left)) return false;
    queue<Node*> q;
    q.push(root->left);
    q.push(root->right);

    while(!q.empty()) {
        Node *a = q.front();
        Node *b = q.front();
        q.pop();
        q.pop();

        if((!a && b) || (a && !b)) return false;
        if(a && b && a->data != b->data) return false; 

        q.push(a->left);
        q.push(b->right);
        q.push(a->right);
        q.push(b->left);
    }   

    return true;
}

int main(int argc, char** argv) {
    Node* root = level_order_insert(root, 10);
    root = level_order_insert(root, 11);
    root = level_order_insert(root, 9);
    root = level_order_insert(root, 12);
    root = level_order_insert(root, 10);
    inorder(root);

    cout << is_symmetric(root);

    return 0;
}