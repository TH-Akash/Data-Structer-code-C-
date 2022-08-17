#include<bits/stdc++.h>
//#include<climits>
using namespace std;
 int main(){
     int MaxN,MinN;
     int a;
     cin>>a;
     int array[a];
     for(int i=0;i<a;i++){
        cin>>array[i];
     }

     for(int i=0;i<a;i++){
       MaxN=max(MaxN,array[i]);
       MinN=min(MinN,array[i]);
     }
     cout<<MaxN<<" "<<MinN<<endl;

     return 0;


 }
