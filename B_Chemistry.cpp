#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i = 0;i  < n;i++){
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto it:mp){
            if(it.second&1) cnt++;
        }
        if(cnt > k +1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}