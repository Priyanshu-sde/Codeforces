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
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        ll sum = 0;
        fr(i,k){
            sum+=a[i];
        }
        a[n-1] += sum;
        for(int i = k;i < n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
	    
	
    }
    return 0;
}