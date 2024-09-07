#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

unsigned long long comb(int n,int r){
    return (unsigned long long)tgamma(n+1)/((unsigned long long)tgamma(1+r)*(unsigned long long)tgamma(n-r+1));
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> x;
        unordered_map<int,int> y;
        int xa,ya;
        for(int i = 0; i< n;i++){
            cin>>xa>>ya;
            x[xa]++;
            y[ya]++;
        }
        int colp = 0;
        for(auto it:x){
            if(it == 2) colp++;
        }
        
        unsigned long long ans = colp*(n-2);


    }
    return 0;
}