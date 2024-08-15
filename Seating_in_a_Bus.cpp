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
        int n;
        cin>>n;
        vector<int> a(n+1);
        unordered_map<int,int> cn;
        int fl = 1;
        for(int i = 1 ;i <= n;i++){
            cin>>a[i];
            cn[a[i]]++;
            if(i > 1){
                if(cn[a[i]-1] == 1 || cn[a[i]+1] == 1){
                continue;
                }
                else{
                fl = 0;
            }
            }
            
        }
        if(fl)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}