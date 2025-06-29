#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
bool isover(ll x1,ll x2, ll a){
    ll L1 = min(x1, x1 + a), R1 = max(x1, x1 + a);
    ll L2 = min(x2, x2 + a), R2 = max(x2, x2 + a);
    return max(L1, L2) < min(R1, R2);
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        ll w,h,a,b;
        cin>>w>>h>>a>>b;
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        bool fl = false;
        if(isover(x1,x2,a) && llabs(y1-y2) % b == 0) {
             fl = true;
        }
        else if(isover(y1,y2,b) && (llabs(x1-x2) % a == 0) ){
            fl = true;
        }
        else if(!isover(x1,x2,a) && !isover(y1,y2,b) && (llabs(y1-y2) % b == 0 || (llabs(x1-x2) % a == 0))){
            fl = true;
        }
        fl ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}