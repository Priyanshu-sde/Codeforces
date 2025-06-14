#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool cmp(const pair<int,int> &a, const pair<int,int> &a){
    return a.second < b.second;
}

int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> a;
    for(int i = 0;i < n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),cmp);
    auto s = a[0];
    for(int i = 0;i < n;i++){

    }

    
    
    return 0;
}