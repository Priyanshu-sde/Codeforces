#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
vector<pair<int,int>> a(101);
int n;
int rec(int state,int w){
    if(state == n) return 0;
    int taken = 0;
    if(w-a[state].first >= 0)
    taken = a[state].second + rec(state+1,w-a[state].first);
    int notaken = rec(state+1,w);
    return max(taken,notaken);
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w;
    cin>>n>>w;
    fr(i,n){
        cin>>a[i].first>>a[i].second;
    }
    cout<<rec(0,w)<<endl;

    return 0;
}