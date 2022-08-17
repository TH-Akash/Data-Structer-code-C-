#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next,*prves;
    node()
    {
        next=NULL;
        prves=NULL;
    }
    node (int value)
    {
        data=value;
        next=NULL;
        prves=NULL;
    }
};
node *head=NULL;
node *tail=NULL;
int siz=0;
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
        newNode->prves=tail;
        tail->next=newNode;
        tail=tail->next;
    }
    ++siz;

}
void display(int index)
{
    node *temp=head;
    node *point =new node();
    int cnt=0;
    while(cnt!=index)
    {
        temp=temp->next;
        ++cnt;
    }
    point=temp;

    while(point->prves!=NULL)
    {
        cout<<point->data<<" ";
        point=point->prves;
    }
    cout<<point->data<<" ";

    if(index!=siz-1)
    {
        node *End_node=tail;
        while(End_node->prves!=temp)
        {
            cout<<End_node->data<<" ";
            End_node=End_node->prves;
        }
        cout<<End_node->data<<endl;
    }


}
int main()
{
    int test = 5, cas =1;
    while(test--)
    {
        int x;
        cin>>x;
        for(int i=0; i<x; i++)
        {
            int a;
            cin>>a;
            append(a);
        }
        int index;
        cin>>index;
        cout<<"Test :"<<cas<<endl;
        if(siz<=index)
        {
            cout<<"Invalid index"<<endl;
        }
        else

        {
            display(index);
        }
        head=NULL;
        tail=NULL;
        siz=0;
        ++cas;

    }

}
