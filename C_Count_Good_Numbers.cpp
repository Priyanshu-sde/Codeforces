#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()

ll countof(ll n, ll l, ll r)
{
    return (r / n) - (l - 1) / n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << r - l + 1 
        - (countof(2, l, r) + countof(3, l, r) + countof(5, l, r) + countof(7, l, r)) 
        + (countof(6, l, r) + countof(10, l, r) + countof(14, l, r) + countof(15, l, r) + countof(21, l, r) + countof(35, l, r))
        - (countof(30, l, r) + countof(105, l, r) + countof(70, l, r) + countof(42, l, r)) 
        + (countof(210, l, r)) << endl;
    }
    return 0;
}