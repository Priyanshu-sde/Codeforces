#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ma[n];
        int mi[n];
        int mae = 0;
        fr(i, n)
        {
            cin >> a[i];
        }
        ma[n - 1] = a[n - 1];
        mi[0] = a[0];

        for (int i = n - 2; i >= 0; i--)
        {

            ma[i] = max(a[i], ma[i + 1]);
        }
        for (int i = 1; i < n; i++)
        {
            mi[i] = min(a[i], mi[i - 1]);
        }
        bool s[n];
        for (int i = 0; i < n ; i++)
        {
            if (a[i] == ma[i] || a[i] == mi[i])
            {
                s[i] = 1;
            }
            else
            {
                s[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}