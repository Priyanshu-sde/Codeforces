#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int cnt = 0;
	    bool fl = false;
	    for(int i = n-1;i >=0;i--){
	        if(s[i] == '1'){
	            fl =  true;
	            cnt++;
	        }
	        else if(fl && k > 0){
	            cnt++;
	            k--;
	        }
	    }
	    cout<<cnt<<endl;
	}

}
