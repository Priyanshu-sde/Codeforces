#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

bool check(string x, string s){
    if(x.length() > s.length()) return false;
    for(int i = 0;i < s.length() ;i++){
        bool fl =  true;
        for(int j = 0 ;j < x.length();j++){
            if(x[i] != s[j]){
                fl = false;
                break;
            }
        }
        if(!fl) return true;
    }
    return false;
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        while (!check(x,s) && 3*(x.length()) >= s.length())
        {
            s += s;
        }
        if(check(x,s))cout<<(s.length())/m<<endl;
        else cout<<-1<<endl;

        
    }
    return 0;
}