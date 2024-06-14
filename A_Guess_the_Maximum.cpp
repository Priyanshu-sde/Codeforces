#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(long long  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll min = INT_MAX,a;
        vector<ll> ar(n);
        fr(i,n){
            cin>>ar[i];
            if(i>0){
                if(max(ar[i-1],ar[i]) < min){
                    min = max(ar[i-1],ar[i]);
                }
            }
            
        }

        cout<<min-1<<endl;

    }
    return 0;
}