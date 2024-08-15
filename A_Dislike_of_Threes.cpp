#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int k;
        cin>>k;
        for(int i = 0;i < k;i++){
            if(i%3 == 0|| i%10 == 3){
                k++;
            }
            if(i == k-1){
                cout<<i<<endl;
            }
        }
    }

}