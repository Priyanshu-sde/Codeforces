#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    vector<int> cnt(n+1,0);
	    for(int i = 0;i < n;i++){
	        cin>>a[i];
	        cnt[a[i]]++;
	    }
	    int  k = 0,fl = 1;
	    for(int i = 1;i <= n;i++){
	        k += cnt[i];
	        if(k<1){
	            fl = 0;
	            break;
	        }
	        k--;
	    }
	    if(fl == 1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}

}
