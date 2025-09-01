#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

#define MOD 1000000007


int h,w;

vector<vector<int>> dp(1001,vector<int> (1001,-1));


int rec (vector<vector<char>> grid,int i,int j){
    if(i >= h || i < 0 || j >= w || j < 0 || grid[i][j] == '#') return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(i == h-1 && j == w-1) return 1;
    return dp[i][j] = (rec(grid,i+1,j) + rec(grid,i,j+1))%MOD;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>h>>w;
    vector<vector<char>> grid(h,vector<char>(w));
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin>>grid[i][j];
        }
    }
    cout<<rec(grid,0,0)<<endl;
    return 0;
}