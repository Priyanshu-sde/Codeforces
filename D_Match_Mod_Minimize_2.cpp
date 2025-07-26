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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll a[n], b[n];
        fr(i,n)cin>>a[i];
        fr(i,n)cin>>b[i];
        sort(a,a+n,greater<int>());
        sort(b,b+n);
        int idx = 0;
        ll sum = 0;
        for(int i =0 ;i < n;i++){
            if(a[i] + b[i] >= m){
                sum += (a[i] + b[i])%m;
            }
            else{
                idx = i;
                break;
            }
        }
        sort(a+idx,a+n);
        for(int i = idx;i < n;i++){
            sum += (a[i] + b[i])%m;
        }
        cout<<sum<<endl;
        

    }
    return 0;
}