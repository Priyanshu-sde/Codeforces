#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()

bool check(int l1, int l2, int l3, int b1, int b2, int b3)
{
    int lsum = l1 + l2 + l3;
    int bsum = b1 + b2 + b3;
    if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1)
        return true;
    if ((l2 + l3) == l1 && b2 == b3 && (b1 + b2) == l1)
        return true;
    return false;
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
        int l1, l2, l3, b1, b2, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if (check(l1, l2, l3, b1, b2, b3) || check(b1, b2, b3, l1, l2, l3))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}