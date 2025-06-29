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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int mi = 0;
        int cnt = 0;
        int ai = 0, aj = 0;
        int fi = -1, fj = -1;
        int aai = 0, aaj = 0;
        map<int, int> icn, jcn;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] > mi)
                {
                    mi = a[i][j];
                    cnt = 1;
                    ai = i;
                    aj = j;
                    aai = i;
                    aaj = j;
                }
                else if (a[i][j] == mi)
                {
                    
                    if(cnt == 1){
                        if()aai = i;
                        aaj = j;
                        cnt++;
                    }
                    else{

                    }
                    
                   
                }
            }
        }

        if (cnt <= 2)
        {
            cout << mi - 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (mi == a[i][j])
                    {
                       
                    }
                }
            }
            
            fl ? cout << mi - 1 << endl : cout << mi << endl;
        }
    }
}