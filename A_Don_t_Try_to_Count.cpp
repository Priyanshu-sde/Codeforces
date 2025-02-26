#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int j = 0,fl = 0,ans = -1;
        for(int i = 0;i < n;i++){
            if(s[j] == x[i]){
                j++;
                if(j == m){
                    ans = fl;
                    break;
                }
                else if(i == n-1){
                    i = 0;
                    fl++;
                }
            }
            else{
                if(fl > 0 || i == n-1) {
                    ans = -1;
                    break;
                }
                j = 0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}