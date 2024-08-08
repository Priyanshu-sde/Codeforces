#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> s(n);
        ll q = 0;
        for(int i = 0 ;i < n;i++){
            cin>>a[i];            
        }
        s[0] = a[0];
        for(int i = 1 ;i < n;i++){
            s[i] = s[i-1] + a[i];
        }
        int fl = 0LL,ind = -1LL;
        for(int i = 1 ;i < n;i++){
            if(s[i-1] == s[n-1] - s[i-1]){
                fl = 1;
                ind = i;
                break; 
            }
            if(s[i-1] + 1 == s[n-1] -  s[i-1]){
                ind = i;
                fl = 2;
                break;
            }
            if( s[i-1] == s[n-1] - s[i-1] + 1){
                ind = i;
                fl = 3;
                break;
            }
        }
        if(ind == -1){
            cout<<0<<endl;
            break;
        }
        ll cnt = 0LL,fl2 = 0LL,fl3 = 0LL;
        for(int i = ind ;i < n;i++){
            if(a[i]==0 && fl3 == 0LL){
                cnt++;
            }
            else if(a[i]==0 && fl3 == 1LL){
                cnt += 2;
            }
            else if(a[i] == 1 && a[i+1] == 0 && fl2 == 1LL){
                if(fl == 2){
                    fl3 = 1LL;
                }
                fl2 = 1LL;
                if(fl == 1){
                    cnt *= 2;
                }
                continue;
            }
            else if(cnt == 0LL && a[i] == 1 && fl != 3){
                if(fl == 2){
                    fl = 1;
                }
                else{
                    fl = 3;
                }
                
            }
            else{
                break;
            }
        }
        if(fl2 == 0 && fl == 1){
            cnt *= 2LL;
        }

        cout<<cnt<<endl;
        
    }

}