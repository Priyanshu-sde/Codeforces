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
    int t= 1;
    while(t--){
        ll n,k;
        cin>>n>>k;
        int a[n];
        for(int i =0 ;i < n;i++){
            cin>>a[i];
        }
        int next = a[0];
        int cnt = 1;
        while(next != 0){
            next = a[next-1];
            cnt++;
        }
        k = k%cnt;
        int ans = a[0];
        for(int i = 0;i < k;i++){
            ans = a[ans-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}