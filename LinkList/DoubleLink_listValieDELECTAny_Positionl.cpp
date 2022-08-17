#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next,*preves;
    node(int value)
    {
        data=value;
        next=NULL;
        preves=NULL;
    }

};
node *head=NULL;
node *tail=NULL;
void append(int value)
{
    if(head==NULL)
    {
        head=new node(value);
        tail=head;
    }
    else
    {
        node *newNode=new node(value);
        tail->next=newNode;
        newNode->preves=tail;
        tail=tail->next;
    }
}

void deleteNode1(int deleatData)
{
    if(head==NULL)
    {
        return ;
    }


    node *current_Node=head;


    while(current_Node->data!=deleatData)
    {
        current_Node=current_Node->next;
    }
    node *newNode=current_Node->next;
    node *preves_Node=current_Node->preves;
    preves_Node->next=newNode;
    newNode->preves=preves_Node;
    delete(current_Node);


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
    append(1);
    append(2);
    append(3);
    append(4);
    append(5);
    append(6);
    append(7);
    display();
    cout<<endl;
    deleteNode1(6);
    display();


}

