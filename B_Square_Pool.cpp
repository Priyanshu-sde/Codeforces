#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        int ans = 0;
        int dx,dy,x,y;

        for(int i =0;i < n;i++){
            cin>>dx>>dy>>x>>y;
            bool ispo = false;
            if(dx == dy){
                if(x == y){
                    ispo = true;
                }
            }
            else{
                if(s-x == y || s-y == x){
                    ispo = true;
                }
            }
            if(ispo) ans++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}