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
node *front=NULL;
node *tail=NULL;
void push(int value)
{
    if(front==NULL)
    {
        front=new node(value);
        tail=front;

    }
    else
    {
        node *newNode=new node(value);
        newNode->prevs= tail;
        tail->next=newNode;
        tail=tail->next;
    }

}
void pop()
{
    if(front==NULL)
    {
        cout<<"Empty Queue "<<endl;
        return;
    }
    if(front==tail){
        front=NULL;
        tail=NULL;
        return;
    }
     front=front->next;
     front->prevs=NULL;

}
void frontValue(){
    cout<<front->data<<endl;
}
void EmptyQueue(){
    if(front!=NULL){
        cout<<"Not Empty Queue "<<endl;
    }
    else{
        cout<<"Empty Queue "<<endl;
    }
}
void display()
{
    node *newNode=front;
    while(newNode!=NULL)
    {
        cout<<newNode->data<<" ";
        newNode=newNode->next;
    }

}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    cout<<"This Queue Push Value :";
    display();
    cout<<endl<<endl;
    pop();
    pop();
    pop();
    cout<<"This Queue End Value : ";
    display();
    cout<<endl<<endl;
    cout<<"This Queue Front Value : ";
    frontValue();
    cout<<endl<<endl;
    cout<<"This Queue is : ";
    EmptyQueue();

    //display();
}
