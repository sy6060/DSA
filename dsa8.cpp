//Given a BST, implement INSERT,SEARCH, and DELETE operations while maintaining BST properties, 
//and display the inorder traversal after all operations. Also, given a set of strings, implement

#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int val) : key(val), left(nullptr), right(nullptr) {}
};

// Insert into BST
Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->key) root->left = insert(root->left, key);
    else if (key > root->key) root->right = insert(root->right, key);
    return root;
}

// Search in BST
bool search(Node* root, int key) {
    if (!root) return false;
    if (root->key == key) return true;
    if (key < root->key) return search(root->left, key);
    return search(root->right, key);
}

// Find minimum node
Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

// Delete from BST
Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->key) root->left = deleteNode(root->left, key);
    else if (key > root->key) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Search 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;
    cout << "Search 25: " << (search(root, 25) ? "Found" : "Not Found") << endl;

    root = deleteNode(root, 20);
    root = deleteNode(root, 30);
    root = deleteNode(root, 50);

    cout << "Inorder after deletions: ";
    inorder(root);
    cout << endl;
    return 0;
}

