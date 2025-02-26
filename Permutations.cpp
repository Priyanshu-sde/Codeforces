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
    while(t--){
        int n;
        cin>>n;
        if(n > 3){
            cout<<"NO SOLUTION"<<endl;
        }
        else{
            for(int i = 1; i <= n/2;i++){
                cout<<2*i - 1<<" ";
                cout<<2*i 
            }
        }
    }
    return 0;
}