//By kavin123, contest: Codeforces Round 915 (Div. 2), problem: (B) Begginer's Zelda, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int t; cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int> freq(n+1,0);
    int a,b;
    int count =0;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        freq[a]++;
        freq[b]++;
    }
    for(int i=1;i<=n;i++){
        if (freq[i]==1){
            count++;
        }
    }
    int ans=(count+1)/2;
    cout<<ans<<"\n";
    freq.clear();
}
 
}
