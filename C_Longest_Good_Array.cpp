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
        int l,r;
        cin>>l>>r;
        int b = r- l;
        int n = 1;
        if(b == 0){
            cout<<1<<endl;
            continue;
        }
        if(b == 1){
            cout<<2<<endl;
            continue;
        }
        while((n*(n+1))/2 < b){
            n++;
            if((n*(n+1))/2 == b){
                n++;
            }
        }
        cout<<n<<endl;

    }
    return 0;
}