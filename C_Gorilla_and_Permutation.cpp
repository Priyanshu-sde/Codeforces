#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        
        int a = n-m;
        for(int i = 0;i<a;i++){
            cout<<n<<" ";
            n--;
            
        }
        for(int i = 1;i <= m;i++){
            cout<<i<<" ";
        }
        

        cout<<endl;
    }

}