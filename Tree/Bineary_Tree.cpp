#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

node *root=NULL;
 void inorder(node *root){
     if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
     }
 }
int main(){
 root=new node(1);
 root->left=new node(2);
 root->right=new node(3);
 root->left->left=new node(4);
 root->left->right=new node(10);
 inorder(root);

return 0;
}


