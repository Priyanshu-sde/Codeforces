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
        int a,b,c;
        cin>>a>>b>>c;
        if((a+c)%(b*2) == 0 || ((2*b - a)%c == 0 && (2*b - a) > 0 )|| ((2*b - c)%a == 0 && (2*b - c) > 0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}