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
        int n,k;
        cin>>n>>k;
        int a[n];
        fr(i,n) cin>>a[i];
        sort(a,a+n);
        int intv = 1,tintv = 1;
        for(int i = 1;i < n;i++){
            if(a[i] - a[i-1] <= k){
                tintv++;
                intv = max(intv,tintv);
            }
            else{                
                tintv = 1;
            }
        }
        if(n==1) cout<<0<<endl;
        else cout<<n-intv<<endl; 
    }
    return 0;
}