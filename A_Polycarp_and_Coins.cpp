#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        cout<<(n/3) + (n%3)%2<<" "<<(n - ((n/3) + (n%3)%2))/2<<endl;
    }

}