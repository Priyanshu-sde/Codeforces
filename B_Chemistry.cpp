#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i = 0;i < n;i++){
            mp[s[i]]++;
        }
        int si = 0;
        if((n-k)%2){
            for(auto it = mp.begin();it != mp.end();it++){
                ]
            for(int i = 0;i < n-k;i++){
                
                if(mp[s[i]]%2 == 0){
                    si += mp[s[i]];
                }
            }
        }
    }
    return 0;
}