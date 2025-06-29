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
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool fl = false;
        vector<int> mp(27);
        for (int i = 0; i < n; i++)
        {
            mp[s[i] - 'a']++;
            if (i != n - 1)
            {
                if (mp[s[i] - 'a'] > 1)
                {
                    fl = true;
                    break;
                }
            }
            else{
                if(s[0] != s[n-1] && mp[s[i] - 'a'] > 1)
                {
                    fl = true;
                    break;
                }
            }
        }
        fl ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}