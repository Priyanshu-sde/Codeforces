#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define all(x) x.begin(), x.end()
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> ar(n+1);
        int a = 0,b;
        fr(i,n){
            cin>>b;
            ar[i] = b-a;
            a = b;
        }
        ar[n] = 2*(x-a);
        cout<<*max_element(all(ar))<<endl;

    }
    return 0;
}