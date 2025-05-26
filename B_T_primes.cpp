#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e6;
#define all(a) a.begin(),a.end()

vector<int> spf(N+1,0);

void gen_spf(){
    spf[0] = spf[1] = 1;
    for(int i = 2;i <= N;i++){
        if(spf[i] == 0){
            spf[i] = i;
            for(int j = i*i;j <= N;j += i){
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
        ll a,pf;
        fr(i,n){
            cin>>a;
            pf = 1;
            while(a != 1){
                a /= spf[a];
                pf++;
                if(pf > 3) break;
            }
            if(pf == 3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl; 

        }

    }
    return 0;
}