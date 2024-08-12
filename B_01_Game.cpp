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
        string s;
        cin>>s;
        int n = s.length();
        int cnt = 0;
        for(int i = 0 ;i < n;i++){
            if(s[i] == '1')
            cnt++;
        }
        if(abs(n - cnt)%2 == 0)
        cout<<"NET"<<endl;
        else
        cout<<"DA"<<endl;
        
    }
}