#include<bits/stdc++.h>
using namespace std;
int main(){
    int Mx=-1999999;

    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        Mx=max(Mx,array[i]);
        cout<<Mx<<endl;
    }
}
