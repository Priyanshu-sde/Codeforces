#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<char> a(n+1);
        a[n] = 'L';
        ll cntl = 0LL,cntnl = 0LL,bl = 0LL,tl = 1,mc = 0LL,tc = 0LL,v1 = 0LL;
        bool chk = false;
        for(ll i = 0 ;i <= n;i++){
            if(i < n)
            cin>>a[i];
                tl++; 
                if(i == 0){
                    a[0] = 'L';
                }
                if(a[i] != 'C')
                tc = 0;
                if(a[i] == 'C'){
                    tc++;
                    if(tl >= m){
                        chk = true;
                    }
                }
                
                mc = max(mc,tc);
                if(a[i] == 'L'){
                    if(tl <= m){
                        bl +=tl;
                    }
                    else
                    cntl++;
                    tl = 0LL;
                }  
                tl++;            
            

            
        }
        ll tswim = n - (cntl)*m - bl-v1;
        if(mc >= m){
            cout<<"NO"<<endl;
        }
        else if(tswim > k){
            cout<<"NO"<<endl;
        }
        else if(chk){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

}