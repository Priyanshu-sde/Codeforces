#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
        string s;
        cin>>s;
        for(int i = 0;i < s.length();i++){
            if(s[i] > 53)
            s[i] = 49 + (9-(s[i]-49));
        }
    
    cout<<s<<endl;
    return 0;
}   