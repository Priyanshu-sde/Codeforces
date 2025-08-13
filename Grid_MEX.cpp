#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>> ans(n,vector<int> (n,0));
	    for(int i = 0 ;i < n;i++){
	        for(int j = 0;j < n;j++){
	            if(i == j){
	                cout<<0<<" ";
	            }
	            else{
	                cout<<i+j<<" ";
	            }
	            
	        }
	        cout<<endl;
	    }
	}

}
