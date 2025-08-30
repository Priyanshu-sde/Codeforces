#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define debug(x) cerr << #x << " = " << x << endl;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int tt = 0;
        if(s[0] == '1') tt = 1;
        bool fl = true;
        for(int i = 1;i < n;i++){
            if( s[i-1] == '1' && s[i] == '1' && s[i-1] == s[i]){
                tt++;
            }
            else {
                if(tt >= k){
                    fl = false;
                    break;
                }
                if(s[i] == '1')tt = 1;
            }
        } 
        if(tt >= k){
            fl = false;
            
        }
        if(!fl){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            vector<int> ans(n);
            int ma = 1;
            int mi = n;
            for(int i  =0;i < n;i++){
                if(s[i] == '1'){
                    ans[i] = ma;
                    ma++;
                }else{
                    ans[i] = mi;
                    mi--;
                }
            }
            for(int i = 0;i < n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }



    }
    return 0;
}