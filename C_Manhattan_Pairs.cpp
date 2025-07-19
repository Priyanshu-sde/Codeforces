#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool cmp (pair<int,pair<int,int>> a,pair<int,pair<int,int>> b){
    int x = abs(a.second.first - b.second.first);
    int y = abs(a.second.second - b.second.second);
    if(x > y){
        return a.second.first < b.second.first;
    }
    return a.second.second < b.second.second;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,pair<int,int>>> a(n);
        for(int i =0;i < n;i++){
            a[i].first = i;
            cin>>a[i].second.first>>a[i].second.second;
        }
        sort(a.begin(),a.end(),cmp);
        for(int i = 0;i < n/2;i++){
            cout<<a[i].first+1<<" "<<a[n-i-1].first+1<<endl;
        }

    }
    return 0;
}