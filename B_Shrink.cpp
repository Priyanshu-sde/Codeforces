#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s = 1, b = ((n+1)/2) + 1;
        cout<<"1 ";
        for(int i = n;i > 1;i--){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}