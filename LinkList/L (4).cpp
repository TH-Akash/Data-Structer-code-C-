#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node *head = NULL;

//insert value
void insrt(int val){
    if(head==NULL){
        head = new node(val);
    }
    else{
        node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new node(val);
    }
}

//insert value at first position
void insert_first(int val){
    if(head==NULL){
        head = new node(val);
    }
    else{
        node *t = new node(val);
        t->next = head;
        head = t;
    }
}

//insert in mid
//doira nelam amr list a value ase
//ai khane pos mane jai valuer pore ami new value add korta chaitase
void insert_mid(int pos,int val){
    node *cur = head;
    while(cur->data!=pos){
        cur = cur->next;
    }
    node *newNode = new node(val);
    newNode->next = cur->next;
    cur->next = newNode;
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
    for(int i=0; i<n; i++){
        int x;cin>>x;
        insrt(x);
    }
    display();
    insert_first(50);
    cout<<endl;
    display();
    cout<<endl;
    insert_mid(8,10);
    display();
}





