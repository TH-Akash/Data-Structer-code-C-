//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binerySearch(int array[],int n,int value){
    int left=0;
    int right=n;
    while(left<=right){
        int mid=(left+right)/2;

         if(array[mid]==value){
             return mid;
         }
         else if(array[mid]<value){
            left=mid+1;
         }
         else{
            right=mid-1;
         }

    }
    return -1;

}


 int main(){
     int n;
     cin>>n;
     int array[n];
     for(int i=0;i<n;i++){
        cin>>array[i];
     }
     int value;
     cin>>value;

     cout<<binerySearch(array,n,value)<<endl;
     return 0;

 }
