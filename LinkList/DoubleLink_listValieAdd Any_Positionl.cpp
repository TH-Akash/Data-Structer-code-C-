#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next,*preves;
    node(int value){
        data=value;
        next=NULL;
        preves=NULL;
    }
};
node *head=NULL;
node *tail=NULL;
void append(int value){
    if(head == NULL){
        head=new node(value);
        tail=head;
    }
    else{
        node *newnode =new node(value);
         newnode->preves=tail;
         tail->next=newnode;
         tail=tail->next;

    }

}

void insert_mid_0r_any_position(int value,int NewValue){
    node *current_node=head;
    while(current_node->data!=value){
        current_node=current_node->next;
    }
        node *newNode = new node(NewValue);
        newNode->next=current_node->next;
        current_node->next=newNode;
        newNode->preves=current_node;
        node* temp=current_node->next;
        temp->preves=newNode;




}

void display(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
   append(4);
   append(8);
   append(4);
   display();
   cout<<endl;
   insert_mid_0r_any_position(8,3);
   display();

}
