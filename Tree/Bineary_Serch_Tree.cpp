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
void insert_tree(int value)
{
    if(root==NULL)
    {
        root=new node(value);
        return;
    }
    node *temp=root;
    node *k=NULL;
    while(temp!=NULL)
    {
        k=temp;

        if(value<temp->data)temp=temp->left;

        else temp=temp->right;

    }
    if(value<k->data)
    {
        k->left=new node(value);
    }
    else
    {
        k->right=new node(value);
    }


}
void inorder (node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        insert_tree(x);
    }
    inorder(root);

}
