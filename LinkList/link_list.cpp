#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node* next;
};
// node *insertNode =root;
void inserAthead(int value){
    node *insertNode =NULL;
    insertNode->next=insertNode;
    insertNode=insertNode;
}
node *root= NULL;
void append(int value){
    if(root==NULL){
    root=new node();
    root->value=value;
    root->next=NULL;

    }
   else{
    node *present=root;
    while(present->next!=NULL){
        present=present->next;
    }
    node *newnode=new node();
    newnode->value=value;
    newnode->next=NULL;
    present->next=newnode;
   }
}
   void print(){
       node *present=root;
       while(present->next!=NULL){
        cout<<present->value<<"->";
        present=present->next;
       }cout<<present->value<<endl;

   }



int main(){
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        append(x);
    }


    print();

}
