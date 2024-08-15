#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        map<char,int> cnt;
        for(int i = 0;i < s.length();i++){
            cnt[s[i]]++;
        }
        int ans = 0;
        for(int i = 'a';i <= 'z';i++){
            if(cnt[i] > 1){
                ans+=2;
            }
            else if(cnt[i] == 1){
                ans++;
            }
        }
        cout<<ans/2<<endl;
    }

}