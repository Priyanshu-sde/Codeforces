#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    string s;
    cin>>s;
    for(int i =0 ;i < s.length();i++){
        s[i] -= 32;
        cout<<s[i];
    }

}