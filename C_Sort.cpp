#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a;
        cin>>b;
        while(q--){
            int l,r;
            cin>>l>>r;
            vector<int> ca(26,0); 
            vector<int> cb(26,0);
            for(int i = l-1;i < r;i++){
                ca[a[i]-'a']++;
                cb[b[i]-'a']++;
            }
            ll cnt = 0,cn=0;
            for(char i = 0;i < 26;i++){
                cnt += ca[i]-cb[i];
                cn +=abs(ca[i]-cb[i]);
            }
            cout<<(cn-cnt)/2 + cnt<<endl;
        }
    }

}