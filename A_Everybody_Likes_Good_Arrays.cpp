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
        int n,cnt = 0;
        cin>>n;
        int a;
        cin>>a;
        int p = a%2;
        n--;
        while(n--){
            cin>>a;
            if(p==a%2){
                cnt++;
            }
            else{
                p = a%2;
            }
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}