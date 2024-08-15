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
        int a,k;
        cin>>a>>k;
        int n = a*k;
        vector<int> a(n);
        for(int i = 0 ;i < n;i++){
            cin>>a[i];
        }
        ll sum = 0;
        for(int i = 0; i < n;i+=k){
            ll ma = 0;
            for(int j = i;j < i+k;j++){
                ma = max(ma,a[j]);
            }
            sum += ma;
        }
        cout<<sum<<endl;
    }
}