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
        int n;
        cin>>n;
        int a[n];
        fr(i,n)cin>>a[i];
        int fl = INT_MAX;
        if(a[0] >= a[1]){
            fl = a[1] + a[0];
        }
        cout<<min(fl,2*a[0])<<endl;
    }
    return 0;
}