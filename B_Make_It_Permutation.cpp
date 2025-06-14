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
        cout<<2*n-1<<endl;
        for(int i = 1; i <= n;i++){
            cout<<i+1<<" " <<1<<" "<<n-i+1<<endl;
            if( i > 1)
            cout<<i+1<<" "<<n-i+2<<" "<<n<<endl;
        }
    }
    return 0;
}