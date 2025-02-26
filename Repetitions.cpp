#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    string s;
    int tcount = 0,count = 0;
    cin>>s;
    for(int i = 0; i < s.length();i++) {
        if(s[i] == s[i+1]){
            tcount++;
        }
        else{
            tcount = 0;
        }
        count = max(count,tcount);
    }
    cout<<count + 1<<endl;
}