#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    s.append(s[0]);
	    int cnt = 0;
	    for(int i = 0;i < s.length()-1;i++){
	        if(cnt == -2 && s[i] == s[i+1] ){
	            cnt = -1;
	            break;
	        }
	        
	        if(cnt>0 && s[i] == s[i+1]){
	            if(s[cnt] == s[i]){
	                cnt = -1;
	                break;
	            }
	            else{
	                cnt = -2;
	            }
	        }
	        else if(s[i] == s[i+1]){
	           cnt = i+1;
	        }
	        
	    }
	    if(cnt == 0 || cnt == -2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
