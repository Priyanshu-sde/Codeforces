#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define N 10000000
int hsh[N];
int main(){
    string s;
    cin>>s;
    fr(i,s.length()){
        hsh[s[i]]++;
    }
    fr(i,N){
        if(hsh[s[i]] > 0){
            cout<<s[i];
            if(hsh[s[1]] > 0){
                cout<<"+";
                hsh[s[1]]--;
            }
        }        
    }
    return 0;
}