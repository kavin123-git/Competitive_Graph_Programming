#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>

int main(){
   int t; cin>>t;
   while(t--){
       string s;
       cin>>s;
       int n= (int)(s.size());
       int count = 1;
 	   int extra = 0;
	for (int i = 0; i< n-1; i++) {
		if(s[i]!=s[i+1]){
		    count++;
		}
		extra |= (s[i]=='0' && s[i + 1]=='1');
	}
	cout<< count-extra <<"\n";
}

}
