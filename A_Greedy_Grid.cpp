#include <bits/stdc++.h>
using namespace std;
     
#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
       int n,m;
       cin>>n>>m;
       if((n > 2  && m > 1)|| (m > 2 && n > 1)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    
    return 0;
}