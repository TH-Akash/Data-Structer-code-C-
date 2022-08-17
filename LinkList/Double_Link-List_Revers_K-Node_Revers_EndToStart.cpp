#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next,*prev;
    node()
    {
        next=NULL;
        prev=NULL;
    }
    node(int value)
    {
        data = value;
        next=NULL;
        prev=NULL;
    }

};
node *head=NULL;
node *tail=NULL;
int siz=0;

void append(int value){
    if(head == NULL)
    {
        head=new node(value);
        tail=head;
    }
    else
    {
        node *newNode=new node (value);
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;

    }
    ++siz;
}
void display(int index){

     node *temp= head;
     node *point = new node();
    int cnt=0;
    while(cnt!=index){
        temp = temp->next;
        ++cnt;
    }

   point = temp;
   while(point->prev!=NULL)
   {
       cout<<point->data<<" ";
       point = point->prev;
   }
   cout<<point->data<<" ";

   if(index!=siz-1){
       node *End= tail;
       while(End->prev!=temp)
       {
           cout<<End->data<<" ";
           End = End->prev;
       }
       cout<<End->data;
   }

   cout<<endl<<"Job End"<<endl;
}


int main()
{
    int test = 5, cas =1;
    while(test--){
        int x;
        cin>>x;
        for(int i=0; i<x; i++){
            int a;
            cin>>a;
            append(a);
            //cout<<siz<<"kkk"<<endl;
        }
        int index;
        cin>>index;
        cout<<"Test : "<<cas<<endl;
        if(siz<=index)cout<<"Invalid Index"<<endl;
        else {
            display(index);
        }
       head = NULL;
       tail = NULL;
       siz=0;
       cas++;
    }
}
/*
5
1 2 3 4 5
2
ans = 3;
*/
