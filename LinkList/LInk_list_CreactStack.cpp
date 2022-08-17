#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *pre;
    node(int value)
    {
        data = value;
        next=NULL;
        pre=NULL;
    }
};

node *head = NULL;
node *top=NULL;
void append(int value)
{
    if(head == NULL)
    {
        head=new node(value);
        top=head;
    }
    else
    {
        node *newnode =new node(value);
        top->pre=newnode;
        newnode->next=top;
        top = top->pre;

    }
}

void pop(){
    if(top==NULL)
    {
        cout<<"Empty Stack in Pop"<<endl;
        return;
    }

    if(head==top){
        head=NULL;
        top=NULL;

        return;
    }

    node *tmp = top;
    top = top->next;
    top->pre = NULL;
    delete(tmp);

}
void topValue(){
    node *topval=top;
    if(head==NULL)
    {
        cout<<"Empty Stack in Pop"<<endl;
        return;
    }
     if(head==top){
        cout<<top->data<<endl;
    }
   cout<<topval->data<<endl;


}
void display(){

    node *temp=head;
    if(temp==NULL){
        cout<<"Empty Stack in Display"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->pre;
    }
    cout<<endl;
}
void Empty(){
    if(head!=NULL){
        cout<<" not Empty ."<<endl;
        return;
    }
    else{
        cout<<" is  Empty ."<<endl;
    }
}
int main()
{
    append(1);
    append(3);
    append(4);
    append(60);
    append(7);
    append(10);
    append(30);



   // cout<<top->data<<endl;
    //return 0;
    cout<<"Display Push value : ";
    display();
    cout<<endl;
    cout<<"Display Pop value : ";
    pop();
    pop();
    display();
    cout<<endl;
    cout<<"Display is Top value : ";
    topValue();
    cout<<endl;
    cout<<"Stack Value : ";
    Empty();

}
