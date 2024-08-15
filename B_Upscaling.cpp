#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 1;i <= n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        fr(i,2*n){
            fr(j,2*n){
                if(i%4==1 || i%4==2){
                    if(j%4==1||j%4==2)
                    cout<<"#";
                    else
                    cout<<".";
                }
                else{
                    if(j%4==1||j%4==2)
                    cout<<".";
                    else
                    cout<<"#";
                }
            }
            cout<<endl;
        }
        
    }
    return 0;
}