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
    int t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n&1 || n < 4)cout<<-1<<endl;
        else{
            if(n > 6 && n%6 == 2) cout<<n/6 + (n%6)/2<<" "<<n/4<<endl;
            else cout<<n/6 + (n%6)/4<<" "<<n/4<<endl;
        }

    }
    return 0;
}