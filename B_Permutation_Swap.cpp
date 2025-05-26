#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

ll gcd(ll a, ll b) {
    if(a == 0 || b == 0){
        return a + b;
    }
    return b == 0 ? a : gcd(b, a % b);
}


int bin(vector<ll>& a,int sitem){
    int s = 0,e = a.size()-1;
    int mid;
    while(s <= e){
        mid = (s+e)/2;
        if(a[mid] == sitem){
            return mid;
        }
        else if(a[mid] > sitem){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}


int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,ans = 1;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        vector<ll> b;
        b.assign(a.begin(), a.end());
        sr(b);
        vector<int> c(n);
        for(int i = 0;i < n;i++){
            c[i] = abs(i - bin(b,a[i]));
            if(i == 1){
                ans = gcd(c[0],c[1]);
            }else if(i > 1){
                ans = gcd(ans,c[i]);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}