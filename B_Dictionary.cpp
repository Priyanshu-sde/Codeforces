#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = 0;
        ans += (s[0] - 97)*25;
        ans += (s[1] - 97);
        if(s[0]  > s[1]) ans++;
        cout<<ans<<endl;
    }
    return 0;
}