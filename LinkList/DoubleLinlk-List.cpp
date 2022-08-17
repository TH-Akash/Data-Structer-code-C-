#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next,*prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
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
        node *temp=new node(value);
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
    }


}

void display(){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        append(x);
    }
    display();
}
