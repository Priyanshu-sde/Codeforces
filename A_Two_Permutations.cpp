#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b < n -1 || (a==n&&b==n) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}