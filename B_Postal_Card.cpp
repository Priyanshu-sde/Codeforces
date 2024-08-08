#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i = 0 ;i < n;i++){
        cin>>a[i];
    }
    vector<string> b(m);
    for(int i = 0 ;i < m;i++){
        cin>>b[i];
    }
    int cnt = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            int temp = 0;
            for(int k = 0;k < 3;k++){
                if(a[i][k+3] == b[j][k]){
                    temp++;
                }
            }
            if(temp == 3){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;

}