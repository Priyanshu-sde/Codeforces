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
        int n,k;
        cin>>n>>k;
        char arr[n][n];
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin>>arr[i][j];
            }
        }
        for(int i = 0;i < n;i += k){
            for(int j = 0;j < n;j += k){
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }

}