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
    int n;
    cin >> n;
    vector<string> a(n+1);
    for(int i = 1;i <= n;i++) cin >> a[i];
    int x;
    string y;
    cin >> x >> y;
    if (a[x] == y)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}