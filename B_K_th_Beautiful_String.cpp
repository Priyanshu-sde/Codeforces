#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ind1,ind2;
        for(ll i = 0;i < n;i++){
            if((i*(i+1))/2 + 1 >  k){
                ind1 = i ;
                ind2 = k - ((i*(i-1))/2 + 1);
                break;
            }
        }
        for(ll i = 1;i <=n;i++){
            if(i == n-ind1 ||  i == n-ind2) cout<<"b";
            else cout<<"a";
        }
        
        cout<<"\n";
    }
    return 0;
}