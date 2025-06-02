#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n,m;
    cin>>n>>m;
    cout<<(((n+m-1)/m)*((n+m-1)/m - 1)/2)*3<<" "<<(n-m)*(n-m+1)/2<<"\n";
    return 0;
}