#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

bool ifsorted(vector<ll> &a){
    for(int i =1 ; i< a.size();i++){
    if(a[i-1] > a[i])return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        if(!ifsorted(a)){
            cout<<0<<endl;
            continue;
        }
        ll cnt = LLONG_MAX;
        for(int  i = 1;i < n;i++){
            if(a[i] == a[i-1]){
                cnt = 1;
                break;
            }
            if(a[i] - a[i-1] < cnt){
                cnt = a[i] - a[i-1] ;
            }            
        }
        cout<<(cnt)/2 + 1<<endl;
    }
    return 0;
}