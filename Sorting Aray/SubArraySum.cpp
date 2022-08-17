#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        int current=0;
        for(int j=i;j<n;j++){
            current+=array[j];
            cout<<current<<" ";
        }cout<<endl;

    }
}
