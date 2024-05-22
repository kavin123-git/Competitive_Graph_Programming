#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int main(){
   int t; cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      int max;
      int req_sum;
      if(n%k!=0){
         req_sum=k*(n/k+1) ;
      }
      else{
          cout<<1<<"\n";
          continue;
      }
      if(req_sum%n==0){
          max=req_sum/n;
      }
      else{
          max=req_sum/n + 1;
      }
      cout<<max<<"\n";
      
 }
}
