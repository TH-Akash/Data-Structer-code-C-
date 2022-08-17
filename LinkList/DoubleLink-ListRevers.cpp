
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next,*prevs;
    node(int value)
    {
        data=value;
        next=NULL;
        prevs=NULL;
    }
};
node *head=NULL;
node *tail=NULL;
void append(int value)
{
    if(head == NULL)
    {
        head=new node(value);
        tail=head;
    }
    else
    {
        node *newnode =new node(value);
        newnode->prevs=tail;
        tail->next=newnode;
        tail=tail->next;

    }

}

void ReversNode(){
    node *current_Node=head;
    node *preves_Node=NULL;
    while(current_Node!=NULL){
        node *next_Node=current_Node->next;
        current_Node->next=preves_Node;
        current_Node->prevs=next_Node;
        preves_Node=current_Node;
        current_Node=next_Node;

    }
    tail=head;
    head=preves_Node;
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int x;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        int a;
        cin>>a;
        append(a);
    }
    display();
    cout<<endl;
    ReversNode();
    display();

}
