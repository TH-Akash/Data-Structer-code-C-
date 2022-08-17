#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next,*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
node *tail=NULL;
node *head=NULL;

void append(int val){
    if(head==NULL){
        head = new node(val);
        tail=head;

    }
    else{
        node *newNode = new node(val);
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
        //tail = newNode;

    }
}
void mid(){
    node *first=head;
    node *second =head->next;

    while(second!=NULL && second->next!=NULL){
        first = first->next;
        second=second->next->next;
    }
    cout<<"mid = "<<first->data<<endl;
}

void display(){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;cin>>x;
        append(x);
    }
    display();
    cout<<endl;
    mid();
}
