#include <bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()



int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> a(n);
        fr(i,n)cin>>a[i].first;
        fr(i,n)cin>>a[i].second;
        sort(all(a),[]())        
    }
    return 0;
}