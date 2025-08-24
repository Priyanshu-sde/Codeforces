#include <bits/stdc++.h>
using namespace std;

int isans(string& s,int st,int end,int k){
	map<char,int> mp;
	for(int i = st; i <= end;s++){
		mp[s[i]]++;
	}
	int ans = 1;
	for(auto it : mp){
		if(it.second%k != 0){
			ans = 0;
			break;
		}
	}
	return ans;
}


int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int ans = 0;
		for(int i = 0;i < n;i++){
			for(int j = i + 1;j < n;j++){
				ans += isans(s,i,j,k);
			}
		}

	}
}