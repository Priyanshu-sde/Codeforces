#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<ll> p(n);
        cin>>a[0];
        p[0] = a[0];
        for(int i = 1 ;i < n;i++){
            cin>>a[i];
            p[i] += a[i];

        }
        string s;
        cin>>s;
        ll cnt = 0;
        for(int i =0;i < n;i++){
            if(s[i] == 'L'){
                cnt++;
            }
        }
        cnt = min(cnt,n-cnt);
        ll sub = 0LL,pul = 0LL;
        ll ab = 0,bc = 0;
        for(int i = 1;i < n;i++){
            if(ab == cnt && bc == cnt){
                break;
            }
            if(s[i] == 'L' && ab < cnt){
                sub += p[i-1];
                ab++;
            }
            if(s[n-i-1] == 'R'&& bc < cnt ){
                pul += p[n-i-1];
                bc++;
            }
        }
        if(pul <= sub){
            cout<<0<<endl;
        }
        else{
            cout<<pul-sub<<endl;
        }

    }
}