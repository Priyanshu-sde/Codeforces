#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),cmp)
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool cmp(pair<int,int> &a, pair<int,int> &b){
    if( a.first == b.first ) return a.second < b.second;
    return a.first < b.second; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> a(n);
        fr(i,n) {
            cin>>a[i].first;
            a[i].first = a[i].first % k == 0 ? - k : - a[i].first % k;
            a[i].second = i + 1;
        }
        sr(a);
        fr(i,n){
            cout<<a[i].second<<" ";
        }
        cout<<endl;
       
        
    }
    return 0;
}