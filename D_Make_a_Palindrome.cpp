#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()


int n,k;
int a[200001];

bool rec(int s,int e,int l){


    if(a[s] == a[e]){
        return rec(s+1,e-1);
    }
    return rec(s+1,e) || rec(s,e-1);
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){        
        cin>>n>>k;
        fr(i,n)cin>>a[i];
        int check = rec(0,n-1,k)
    }
    return 0;
}