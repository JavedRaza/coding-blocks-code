#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        node* left=NULL;
        node * right=NULL;
    }
};
node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
   // cout<<root->data;
}
void print(node* root){
    if(root==NULL){
        return ;
    }
        cout<<root->data<<" ";
        print(root->left);
        print(root->right);
}
void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPreorder(node* root){
    if(root==NULL){
        return;
    }
     cout<<root->data<<" ";
    printInorder(root->left);
    printInorder(root->right);
}

void printPostorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    printInorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root=buildtree();
    print(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
     printPreorder(root);
     cout<<endl;
      printPostorder(root);
    return 0;
}
