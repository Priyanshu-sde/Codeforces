#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,a;
	    cin>>n>>k;
	    map <long long,long long> mp;
	    for(int i = 0;i < n;i++){
	        cin>>a;
	        mp[a]++;
	    }
	    for(auto it:mp){
	        if(k>=it.second){
                k -= it.second;
                mp[2*it.first] += it.second;
                it.second = 0;
	        }
	        else if(k>0){
	            mp[2*it.first] += k;
	            it.second -= k;
	            k = 0;
	        }
            else{
                break;
            }
	    }
	    long long sum = 0;
	    for(auto it:mp){
	        sum += it.second*it.first;
	    }
	    cout<<sum<<endl;
	}

}
