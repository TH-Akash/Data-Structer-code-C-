#include<bits/stdc++.h>
using namespace std;
int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
     int preves=factorial(a-1);
     return preves*a;
}
int main(){
    int a;
    cin>>a;
    cout<<factorial(5);
}
