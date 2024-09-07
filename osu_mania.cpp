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
        int n;
        char a;
        cin>>n;
        int an[n];
        fr(i,n){
            for(int j = 1;  j <= 4;j++){
                cin>>a;
                if(a=='#'){
                    an[i]=j;
                }
            }
        }
        for(int i = n-1;i >= 0;i--){
            cout<<an[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}