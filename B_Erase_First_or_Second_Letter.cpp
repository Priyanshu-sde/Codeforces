#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        int n,ans = 0;
        cin>>n;
        string s;
        cin>>s;
        map<char,bool> mp;
        for(int i = 0;i < n;i++){
            if(!mp[s[i]]){
                ans += n-i;
                mp[s[i]] = true;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}