#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int array[],int n,int value){
    for(int i=0;i<n;i++){
        if(array[i]==value){
            return i;
        }
    }
    return -1;


}
int main(){
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter the input: "<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int value;
    cin>>value;
    cout<<LinearSearch(array,n,value)<<endl;
}
