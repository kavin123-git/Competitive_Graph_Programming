//By kavin123, contest: Codeforces Round 881 (Div. 3), problem: (C) Sum in Binary Tree, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
 
    
int main(){
   int t; cin>>t;
   while(t--){
   long long int n;
   cin>>n;
   long long int count=0;
   while(n>0){
       count+=n;
       n=n/2;
   }
   cout<<count<<"\n";
}
 
}
