#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    fr(i,n){
        cin>>a[i].second>>a[i].first;
    }
    return 0;
}