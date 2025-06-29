#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (int i = 0; i < n; i++)
#define sr(a) sort(a.begin(), a.end())
#define srd(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(), a.end()
int n;
int queen[101];

bool check(int row, int col){
    for(int i = 0;i < row;i++){
        int prow = i;
        int pcol = queen[i];

        if(pcol == col || abs(col-pcol) == abs(row-prow)){
            return 0; 
        }        
    }
    return 1;
}

int rec(int level)
{
    if (level == n)
    {
        return 1;
    }
    int ans = 0;
    for (int col = 0; col < n; col++)
    {
        if (check(level, col))
        {
            queen[level] = col;
            ans += rec(level + 1);
            queen[level] = -1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    memset(queen,-1,sizeof(queen));
    cout<<rec(0)<<endl;

    return 0;
}