#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};
node *head=NULL;
void insert(int value){
    if(head==NULL){
        head= new node(value);
    }else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next =new node(value);
    }

}
void insert_first(int value){
    if(head==NULL){
        head = new node(value);
    }
   else{
        node *t = new node(value);
        t->next = head;
        head = t;
    }
}

void display(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insert(x);
    }
   display();
   insert_first(40);
   cout<<endl;
   display();


}
