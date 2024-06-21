#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    int min = INT_MAX;
    while(t--){
        int n;
        cin>>n;
        if(min > abs(n))
        min = abs(n);
    }
    cout<<min<<endl;
    return 0;
}