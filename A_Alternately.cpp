#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0;i < n-1;i++){
        if(s[i] == s[i+1]){
            n = -1;
            break;
        }
    }
    if(n == -1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

}