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

void display(int Index){
    node *temp= head;
    vector <int> v;
    int cnt= 0;
    while(temp!= NULL){

        if(cnt<Index){
            v.push_back(temp->data);
        }
        else cout<<temp->data<<" ";

        temp=temp->next;
        ++cnt;
    }
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    cout<<endl;
}


void display1(int index)
{
    node *temp=head;
    vector<int>v;
    int count=0;
    while(temp!=NULL){
        if(count<index){
            v.push_back(temp->data);
        }
        else{
            cout<<temp->data<<" ";
            temp=temp->next;
            ++count;
        }
    }

}
int main()
{
    int x;
    cin>>x;
     for(int i=0;i<x;i++){
         int a;
         cin>>a;
         append(a);
    }
    int index;
    cin>>index;
    display(index);
}
