#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        int avg = x1;
        if(avg > x2 && avg > x3){
            avg = max(x2,x3);
        }
        if(avg < x2 && avg < x3){
            avg = min(x2,x3);
        }
        int ans = abs(avg-x1) + abs(avg-x2) + abs(avg-x3);
        cout<<ans<<endl;
    }
    return 0;
}