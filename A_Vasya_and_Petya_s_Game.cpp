#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 1001;
#define all(a) a.begin(),a.end()

vector<bool> isprime(N,true);

void seive(){
    for(int i = 2;i*i < N;i++){
        if(isprime[i]){
            for(int j = i*i;j < N;j += i){
                isprime[j] = false;
            }
        }
    }
}

int main(){
    seive();
    int n;
    cin>>n;
    vector<int> ans;
    for(int i = 2;i <= n;i++){
        if(isprime[i]){
            int a = i;
            ans.push_back(a);
            while(a*i <= n){
                a *= i;
                ans.push_back(a);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}