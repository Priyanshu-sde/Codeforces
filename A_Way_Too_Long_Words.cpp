#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length() <= 10) cout<<s<<endl;
        else{
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
        }
    }
    return 0;
}