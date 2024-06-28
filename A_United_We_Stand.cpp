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
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];   
        
        int ma = 0;
        fr(i,n){
            if(a[i] > ma)
            ma = a[i];
        }
        int cnt = 0,cnt1 = 0;
        for(int i = n-1;i >= 0;i--){
            if(ma == a[i]){
                cnt++;
            }
            if(a[i] == 1){
                cnt1++;}

        }       
        if(cnt == n){
            cout<<-1<<endl;
        }
        
        else{
            cout<<cnt+cnt1<<" "<<n-cnt-cnt1<<endl;
            fr(i,cnt) cout<<ma<<" ";
            fr(i,cnt1) cout<<1<<" ";
            cout<<endl;
            fr(i,n) if(!(a[i] == ma || a[i] == 1))cout<<a[i]<<" ";
            cout<<endl;           
        }
    }
    return 0;
}