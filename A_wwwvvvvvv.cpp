#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == 'v'){
            cnt++;
        }
        else
        cnt+=2;
    }
    cout<<cnt<<endl;

}