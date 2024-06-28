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
        int n,c,d;
        cin>>n>>c>>d;
        map<ll,ll> a;
        ll x,y = INT_MAX;
        fr(i,n*n){
            cin>>x;
            a[x]++;
            y = min(y,x);
        }
        bool fl = true;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(a[y+i*c+j*d] > 0){
                    a[y+i*c+j*d]--;
                continue;}
                else{
                fl = false;}
            }
        }   
        if(fl)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;     
    }
    return 0;
}