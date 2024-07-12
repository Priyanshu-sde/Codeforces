#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        ll ans = 0LL;
        vector<int> a(n);
        for(int i = 0 ;i < n;i++){
            cin>>a[i];
            ans = ans | a[i];            
        }

        bitset<64> binary(ans);
        string binstr = binary.to_string(); 
        int sizz = binstr.length();
        int cnt = 0;
        while(binstr[sizz - cnt -1] == '1')
        cnt++;
        cnt++;
        int rans = pow(2,cnt);
        int cans = 0;
        for(int i = 0 ;i < n;i++){
            if(pow(2,cnt) <= a[i]){
                cans++;
            }            
        }
        cout<<cans<<endl;
	    
	}

}