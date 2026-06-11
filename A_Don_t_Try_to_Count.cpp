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
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int len = 0;
        for(int i = 0;i < n;i++){
            int j = 0;
            while(j < m && x[i%n] == s[j]){
                i++;
                j++;      
            }
            if(j == m){
                len = i;
                break;
            } else{
                i -= j;
            }
        }
        if(len == 0) {
            cout<<-1<<endl;
            continue;
        }
        int ans = 0;
        while(n < len){
            ans++;
            n *= 2;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}