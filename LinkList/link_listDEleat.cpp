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


void deleteNode(int val){
    if(head==NULL){// kuno node jodi na thake,,
        return;
    }
    if(head->next==NULL){
        delete(head);
    }

    node *temp = head;
    node *prev = NULL;
    while(temp->data!=val){
        prev = temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete(temp);
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
    deleteNode(10);
    display();
    return 0;
}

