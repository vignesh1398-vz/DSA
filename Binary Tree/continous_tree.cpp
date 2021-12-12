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

bool is_continous(Node* root) {
    if(!root) return false;
    else {
        queue<Node*>q;
        q.push(root);
        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();

            if(temp->left) {
                if(abs(temp->data - temp->left->data) != 1) return false;
                q.push(temp->left);
            }

            if(temp->right) {
                if(abs(temp->data - temp->right->data) != 1) return false;
                q.push(temp->right);
            }
        }
    }

    return true;
}

void inorder(Node* root) {
    if(!root) return ;
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

int main(int argc, char** argv) {
    Node* root = level_order_insert(root, 10);
    root = level_order_insert(root, 11);
    root = level_order_insert(root, 9);
    root = level_order_insert(root, 12);
    root = level_order_insert(root, 10);
    inorder(root);

    cout << is_continous(root);

    return 0;
}