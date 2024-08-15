#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        vector<ll> b(n);
        b[0] = a[0];
        for(int i = 1;i<n;i++){
            b[i] = b[i-1] + a[i];            
        }
        vector<ll> c(n);
        c[n-1] = a[n-1];
        for(int i = n-2;i>=0;i--){
            c[i] = a[i] + c[i+1];            
        }
        int s,e;
        int j = k/2;
        for(int i = 0;i<n;i++){
            if(b[i] > j){
                s = i -1;
                k = k - j;
            }
        }
        bool fl = true;
        for(int i = n-1;i>=0;i--){
            if(c[i]==k){
                e = i;
            }
            else if(c[i] > k){
                e = i +1;
            }
            else if(i==0){
                fl = false;
            }
            
        }
        if(s>=e || !fl){
            cout<<n<<endl;
        }
        else{
            cout<<s + (n-e-1)<<endl;
        }


    }
    return 0;
}