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
    string s,t;
    cin>>s;
    bool fl  = false;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '#'){
            t+='#';
            fl = false;
        }
        else if(!fl){
            t+='o';
            fl = true;
        }
        else {
            t+='.';
        }
    }
    cout<<t<<endl;
    return 0;
}