#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int i=0;i<n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        
        int p = 0;
        fr(i,32){
            if( x > pow(2,i)){
                continue;
            }
            else{
                p = i-1;
                break;
            }
        }
        vector<int> a(p);
        while(x>0){
            a.push_back(x%2);
            x = x - pow(2,p);
            p = p-1;            
        }
        fr(i,a.size()){
            cout<<a[i]<<" ";
        }   
        cout<<endl;
    }
    return 0;
}