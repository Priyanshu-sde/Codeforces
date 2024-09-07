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
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        srd(a);
        int fl = 1;
        for(int i = 1; i  <n ;i++){
            if(a[i-1] != a[i]){
                fl = 0;
                break;
            }
        }
        if(fl){
            cout<<"NO"<<endl;
            continue;
        }
        if(a[0] == a[1]){
            swap(a[0],a[n-1]);
        }
        cout<<"YES"<<endl;
        fr(i,n) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}