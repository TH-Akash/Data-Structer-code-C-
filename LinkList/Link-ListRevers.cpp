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
node*head=NULL;
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
void reverseValue(){
    node*current=head;
    node*prevese=NULL;
    while(current!=NULL){
        node*temp=current->next;
        current->next=prevese;
        prevese=current;
        current=temp;
    }
    head=prevese;

}
void display(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    display();
    cout<<endl;
    reverseValue();
    display();
}

