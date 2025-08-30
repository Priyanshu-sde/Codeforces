#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()

ll f(ll n){
    ll res = 0;
    while(n > 0){
        res = res*10 + n%10;
        n /= 10;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        
        ll a[10];
        cin>>a[0]>>a[1];
        for(int i = 2;i < 10;i++){
            a[i] = f(a[i-1]+a[i-2]);
        }
        cout<<a[9]<<endl;

        
    }
    return 0;
}