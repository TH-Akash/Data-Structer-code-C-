#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
node*head=NULL;
void insertValue(int value)
{
    if(head==NULL)
    {
        head=new node(value);
    }
    else
    {
        node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new node(value);
    }

}
void deleateHead(){
    node*temp=NULL;
    head=head->next;
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
        int a;
        cin>>a;
        insertValue(a);
    }
    display();
    cout<<endl;
    deleateHead();
    display();

}
