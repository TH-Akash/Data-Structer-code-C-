#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
node *root=NULL;
void insert_Node(int value)
{
    if(root==NULL)
    {
        root=new node(value);
        return;
    }
    node *current_Node=root;
    node *parent_Node=NULL;
    while(current_Node!=NULL)
    {
        parent_Node=current_Node;
        if(value<current_Node->data)
        {
            current_Node=current_Node->left;
        }
        else
        {
            current_Node=current_Node->right;
        }
    }
    if(value<parent_Node->data)
    {
        parent_Node->left=new node(value);
    }
    else
    {
        parent_Node->right=new node(value);
    }
}
void Preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);

    }
}
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int a;
        cin>>a;
        insert_Node(a);
    }
    Preorder(root);
}

