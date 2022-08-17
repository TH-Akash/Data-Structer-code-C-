#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node (int value)
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
void MakeCycle(int position)
{
    node *temp = head;
    node *startNode = head;
    int cnt=1;
    while(temp->next!=NULL)
    {
        if(cnt == position)
        {
            startNode=temp;
        }
        temp=temp->next;
        cnt++;

    }
    temp->next=startNode;
}

void disply()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
bool check()
{

    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }

    }
    return false;
}

void RemoveCycle()
{
    if(!check())
    {
        cout<<"This is not Cycle"<<endl;
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

int main()
{
    append(1);
    append(2);
    append(4);
    append(3);
    append(5);
    append(6);

    disply();

    MakeCycle(3);

    RemoveCycle();
    cout<<endl;
    cout<<check()<<endl;

}

