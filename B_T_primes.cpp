#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e6 ;
#define all(a) a.begin(),a.end()

vector<int> spf(N+1,0);

void gen_spf(){
    spf[0] = spf[1] = 1;
    for(int i = 2;i <= N;i++){
        if(spf[i] == 0){
            spf[i] = i;
            for(int j = i;j <= N;j += i){
                if(spf[j] == 0){
                    spf[j] = i;
                }
            }
        }
    }
}




int main(){
    int t = 1;
    gen_spf();
    while(t--){
        int n;
        cin>>n;
        ll a;
        fr(i,n){
            cin>>a;
            ll b = sqrt(a);            
            if(b*b == a && spf[b] == b && a > 3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl; 

        }

    }
    return 0;
}