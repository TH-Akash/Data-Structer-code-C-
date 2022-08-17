#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
node *head =NULL;
void insert(int value)
{
    if(head==NULL)
    {
        head=new node(value);
    }
    else
    {
        node* temp =head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new node(value);
    }
}
void insert_mid(int position, int value){
    node *current= head;
    while(current->data!=position){
        current=current->next;
    }
    node* newnode=new node(value);
    newnode->next=current->next;
    current->next=newnode;

}

void display()
{
    node*temp=head;
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
        int n;
        cin>>n;
        insert(n);

    }
    cout<<"Node sum :";
    display();
    cout<<endl;
    insert_mid(5,10);
    cout<<"Mid node Sum :";
    display();
    return 0;
}
