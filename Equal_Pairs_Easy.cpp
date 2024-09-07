#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        vector<ll> mp(n+1,0);
        for(int i = 0;i < n;i++){
            mp[a[i]]++;
        }
        int ma = 1;
        for(int i = 1;i <= n;i++){
            if(mp[i] > mp[ma]) ma = i;
        }
        for(int i = 0;i < n;i++){
            if(a[i]==0) a[i]=ma;
        }
        int cnt = 0;
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                if(a[i] == a[j]) cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}