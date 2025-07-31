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
        int n,s;
        cin>>n>>s;
        ll a[n];
        fr(i,n) cin>>a[i];
        int su = accumulate(a,a+n,0);
        if(s < su || su + 1 == s){
            int cn0 = 0,cn1  = 0;
            fr(i,n){
                if(a[i] == 0)cn0++;
                else if(a[i] == 2) cn1++;
            }
            fr(i,n){
                if(cn0 > 0) {
                    cout<<"0 ";
                    cn0--;
                }
                else if(cn1 > 0){
                    cout<<"2 ";
                    cn1--;
                }
                else{
                    cout<<"1 ";
                }
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}