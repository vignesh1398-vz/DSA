#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if(!newNode) {
        cout << "Memory full";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;

    return newNode;
}

Node* levelOrderInsert(Node* root, int data) {
    if(!root) {
        root = createNode(data);
    }
    else {
        queue<Node*>q;
        q.push(root);
        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();            
            if(!temp->left) {
                temp->left = createNode(data);
                break;
            }
            q.push(temp->left);
            if(!temp->right) {
                temp->right = createNode(data);
                break;
            }
            q.push(temp->right);
        }
    }

    return root;
}

Node* deleteNode(Node* root, int key) {
    if(!root) return NULL;
    
    /* If root is the only element present in the tree */
    if(root && !root->left && !root->right) {
        if(root->data == key) {
            delete root;
            return NULL;
        }
        else {
            cout << "Key not found" << endl;
        }
    }

    queue<Node*>q;
    Node *parent_of_last_node, *last, *key_node = NULL;
    q.push(root);

    /* Will find the key_node to be deleted,
    last node to be replaced with and the 
    parent_of_the_last_node*/
    while(!q.empty()) {
        last = q.front();
        q.pop();
        if(last->data == key){
            key_node = last;
        }
        if(last->left) {
            parent_of_last_node = last;
            q.push(last->left);
        }
        if(last->right) {
            parent_of_last_node = last;
            q.push(last->right);
        }
    }

    if(key_node) {
        key_node->data = last->data;
        delete(last);
        if(parent_of_last_node->right) 
            parent_of_last_node->right = NULL;
        else 
            parent_of_last_node->left = NULL;
    }
    else {
        cout << "Key not found" << endl;
    }

    return root;
}

void inorder(Node* root) {
    if(!root) return;
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

int main(int argc, char** argv) {
    Node* root = levelOrderInsert(root, 13);
    root = levelOrderInsert(root, 12);
    root = levelOrderInsert(root, 10);
    root = levelOrderInsert(root, 4);
    root = levelOrderInsert(root, 19);
    root = levelOrderInsert(root, 16);
    root = levelOrderInsert(root, 9);
    inorder(root);

    root = deleteNode(root, 16);
    cout << "After deleting 12" << endl;

    inorder(root);
    return 0;
}