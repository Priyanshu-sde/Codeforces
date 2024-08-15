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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i = 0 ;i < n;i++){
            cin>>a[i];
        }
        int m;
        cin>>m;
        string s;
        while(m--){
            cin>>s;
            if(s.size() != n){
                cout<<"NO"<<endl;
                continue;
            }
            int fl = 1;
            vector<ll> mp(26);
            unordered_map<ll,char> imp;
            for(ll i = 0;i < s.size();i++){
                if(mp[s[i] - 'a'] == 0 && imp[a[i]] == 0){
                    mp[s[i] - 'a'] = a[i];
                    imp[a[i]] = s[i];
                }
                else if(mp[s[i] - 'a'] != a[i] || imp[a[i]] != s[i]){
                    fl = 0;
                    break;
                }
                
            }
            if(fl){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
}