#include <iostream>
#include <queue>

using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to count nodes in binary tree
int countNodes(Node* root) {
    if (root == nullptr) return 0;  // base case
    return 1 + countNodes(root->left) + countNodes(root->right);
}
//function to count leaf node in binary tree
int countLeafNodes(Node* root){
    if (root == nullptr) return 0;  // empty tree
    if (root->left == nullptr && root->right == nullptr) 
        return 1;  // leaf node
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}
//count nodes having 1 child
int countOneChild(Node* root) {
    if (root == nullptr) return 0;
    int leftCount = countOneChild(root->left);
    int rightCount = countOneChild(root->right);

    if ((root->left == nullptr && root->right != nullptr) ||
        (root->left != nullptr && root->right == nullptr))
        return 1 + leftCount + rightCount;

    return leftCount + rightCount;
}

//count nodes having 2 child
int countTwoChild(Node* root) {
    if (root == nullptr) return 0;
    int leftCount = countTwoChild(root->left);
    int rightCount = countTwoChild(root->right);

    if (root->left != nullptr && root->right != nullptr)
        return 1 + leftCount + rightCount;

    return leftCount + rightCount;
}

//height of the tree
int height(Node* root) {
    if (root == nullptr) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}
//sum of all nodes
int sumOfNodes(Node* root) {
    if (root == nullptr) return 0;
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}

//check if bt is complete

bool isCompleteTree(Node* root) {
    if (root == nullptr) return true;

    queue<Node*> q;
    q.push(root);
    bool foundNull = false;

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        if (current == nullptr) {
            foundNull = true;
        } else {
            if (foundNull) return false; // if we saw a null before, tree isn't complete
            q.push(current->left);
            q.push(current->right);
        }
    }
    return true;
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Total nodes in tree: " << countNodes(root) << endl;
    cout << "Total leaf nodes: " << countLeafNodes(root)<<endl;
    cout << "no of nodes having 1 child: " << countOneChild(root)<<endl;
    cout << "no of nodes having 2 children: " << countTwoChild(root)<<endl;
    cout << "height of the tree: " << height(root)<<endl;
    cout << "sum of all nodes: " << sumOfNodes(root)<<endl;
    cout << "complete tree?? "<< isCompleteTree(root)<<endl;
    return 0;
}
