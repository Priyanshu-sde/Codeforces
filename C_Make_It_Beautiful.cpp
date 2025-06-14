#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()

ll pow2[60];
void precompute()
{
    ll ans = 1;
    pow2[0] = 1;
    for (int i = 1; i < 60; i++)
    {
        ans *= 2;
        pow2[i] = ans;
    }
}

int main()
{
    precompute();
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        vector<bitset<60>> b;
        fr (i, n)
        {
            cin >> a[i];
            b.push_back(bitset<60>(a[i]));
        }
        int bit = 0;
        int fl = true;
        while (k > 0 &&  fl)
        {
            for (int i = 0; i < n; i++)
            {
                if (k >= pow2[bit])
                {
                    if (!b[i][bit])
                    {
                        k -= pow2[bit];
                        b[i][bit] = 1;
                    }
                }
                else{
                    fl  =false;
                    break;
                }
            }
            bit++;
            if(bit > 60){
                break;
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += b[i].count();
        }
        cout << ans << endl;
    }
    return 0;
}