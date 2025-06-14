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
    int n;
    cin >> n;
    pair<pair<ll, ll>, ll> a[n];
    fr(i, n)
    {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }
    sort(a, a + n);
    ll end = 0;
    int k = 1, mk = 1;
    map<ll, ll> room;
    set<int> st;
    room[a[0].second] = 1;

    int nextroom = 1;
    for (int i = 1; i < n; i++)
    {
        while (a[i].first.first > a[end].first.second)
        {
            st.insert(room[a[end].second]);
            end++;
            k--;
        }
        k++;
        mk = max(k, mk);
        if (st.empty())
        {   
            nextroom++;
            st.insert(nextroom);
        }
        room[a[i].second] = *st.begin();
        st.erase(st.begin());
    }
    cout << mk << endl;
    for (auto it : room)
    {
        cout << it.second << " ";
    }
    cout << "\n";

    return 0;
}