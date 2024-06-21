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
        int n,k,x;
        cin>>n>>k>>x;
        if(x==1){
            if((k==2  && n%2 == 1) || k ==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<x<<endl;                
            }
        continue;
        }
        else{
            cout<<"YES"<<endl;
            cout<<x<<endl;
            while(x--){
                cout<<"1 ";
            }
            cout<<endl;

        }
    }
    return 0;
}