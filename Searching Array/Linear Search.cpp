#include<bits/stdc++.h>
#include<iostream>
using namespace std;


 int linearSearch(int array[],int n,int value){
     for(int i=0;i<n;i++){
        if(array[i]==value){
            return i;
            break;
        }
     }
     return  -1;
 }

 int main(){
     int n,value;
     cout<<"Number of Array :";
     cin>>n;
     int array[n];
     for(int i=0;i<n;i++){
        cin>>array[i];
     }
     cout<<"Find the Number Of value :";
     cin>>value;
     cout<<linearSearch(array,n,value)<<endl;



    return 0;
 }

