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
node *head=NULL;
void append(int value)
{

    if(head==NULL)
    {
        head=new node(value);

    }
    else
    {
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=new node(value);
    }

}
void makeCycle(int position)
{
    node *temp=head;
    node *startNode=head;
    int cont=1;
    while(temp->next!=NULL)
    {
        if(cont==position)
        {
            startNode=temp;

        }
        temp=temp->next;
        cont++;
    }
    cout<<temp->data<<endl;
    temp->next=startNode;
}
bool Check(){
   node *slow=head;
   node *fast=head;

   while(slow!=NULL && fast!=NULL){

    if(fast->next==NULL) break;
    fast=fast->next->next;
    slow=slow->next;

    if(fast==slow){
        return true;
    }
   }
   return false;

}

void RemoveCycle()
{
    if(!Check()){
        cout<<"List is already not cyclic"<<endl;
        return;
    }
    node *slow=head;
    node *fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;

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
    append(6);
    append(4);
    append(6);
    append(7);
    append(8);
    append(9);
    makeCycle(5);
    //display();
    // display();
    //cout<<endl;
    //display();
    cout<<Check()<<endl;
    RemoveCycle();
    display();
    //cout<<RemoveCycle()<<endl;

}
