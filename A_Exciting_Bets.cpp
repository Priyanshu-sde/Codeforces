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
    int t = 1;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a == b)cout<<"0 0"<<endl;
        else{
            cout<<abs(a-b)<<" "<<min(abs(a-b) - a%(abs(a-b)),a%(abs(a-b)))<<endl;
        }
    }
    return 0;
}