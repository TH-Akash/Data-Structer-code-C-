#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;
    }
};
node *head=NULL;
void insert(int value){
    if(head==NULL){
        head=new node(value);
    }
    else{
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new node(value);
    }

}
void deleteNode(int value){
    node *temp=head;
    node*preves=NULL;
    while(temp->data!=value){
        preves=temp;
        temp=temp->next;
    }
    preves->next=temp->next;
    delete(temp);
}
void deleateHead(){
    node*temp=head;
    head=head->next;
    delete(temp);
}

void display(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int a;
        cin>>a;
        insert(a);
    }
    cout<<"insert value :"<<endl;
    display();
    cout<<"deleate 10 value: "<<endl;
    deleteNode(10);
    display();
    deleateHead();
    display();
}
