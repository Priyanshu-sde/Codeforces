#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()

long long binpow(long long a, long long b)
{
    if(b < 0) return 1;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int lim = 18;
    ll pow3[19];
    ll cost[19];
    for (int i = 0; i <= lim; i++)
    {
        pow3[i] = binpow(3, i);
        cost[i] = binpow(3, i + 1) + i * binpow(3, i - 1);
    }
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll nn = n;
        ll ans = 0LL;
        int cnt = 0;
        vector<ll> tri(19,0LL);
        for (int i = 18; i >= 0; i--)
        {
            while (nn >= pow3[i])
            {
                nn -= pow3[i];
                cnt++;
                tri[i]++;
            }
        }
        if (cnt > k)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            nn = n;
            for (int i = 18; i > 0; i--)
            {
                ll can = min(tri[i],(k-cnt)/2);
                if(can <= 0) continue;
                tri[i] -= can;
                tri[i-1] += 3LL*can;
                cnt += 2*can;
                // while(tri[i] > 0 && k >= cnt + 2){
                //     tri[i]--;
                //     tri[i-1] += 3;
                //     cnt += 2;
                // }
            }
            ll ans = 0LL;
            for(int i = 0;i < 19;i++){
                ans += tri[i] * cost[i];
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}