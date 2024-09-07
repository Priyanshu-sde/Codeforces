#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        b = b%2;
        if(b==1){
            if(a >=2 && a%2 == 0)    {
                cout<<"YES"<<endl;
            }        
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(a%2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}