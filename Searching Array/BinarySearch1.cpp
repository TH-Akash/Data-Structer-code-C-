#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int array[],int n,int value){
    int Left=0;
    int Right=n;
    while(Left<=Right){
        int mid=(Left+Right)/2;
        if(array[mid]==value){
            return mid;
        }
       else if(array[mid]>value){
            Right=mid-1;

       }
       else{
            Left=mid+1;

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
    cout<<BinarySearch(array,n,value)<<endl;
}
