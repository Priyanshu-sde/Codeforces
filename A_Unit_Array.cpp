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
    while(t--){
        int n;
        cin>>n;
        int a,m = 0,o =0;
        fr(i,n){
            cin>>a;
            if(a==1){
                o++;
            }
            else
            m++;
        }
        if(m > o)
        cout<<(abs(m-o)+1)/2+abs(m-o)%2<<endl;
        else 
        cout<<0<<endl;
    }
    return 0;
}