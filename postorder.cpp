//find the postorder of a binary tree
#include <iostream>
using namespace std;
class BinaryTree{
public:
    //node structure
    struct node{
        int data;
        node *left;
        node *right;
    };
    void insert(node **root,int val){
        if(*root==NULL){
            *root=new node;
            (*root)->data=val;
            (*root)->left=NULL;
            (*root)->right=NULL;
        }
        else if(val<(*root)->data) insert(&((*root)->left),val);
        else insert(&((*root)->right),val);
    }
    void postorder(node *root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    };
    int main(){
        BinaryTree bt;
        node *root=NULL;
        int n,val;
        cout<<"Enter number of nodes: ";
        cin>>n;
        cout<<"Enter values: ";
        for(int i=0;i<n;i++){
            cin>>val;
            bt.insert(&root,val);
        }
        cout<<"Postorder traversal: ";
       bt. postorder(root);
        cout<<endl;
        return 0;
}