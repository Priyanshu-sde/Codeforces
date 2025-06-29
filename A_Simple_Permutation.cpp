#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 100000;
#define all(a) a.begin(),a.end()

vector<bool> isprime (N+1,true);

void preprime(){
    isprime[0] = isprime[1] = false;
    for(int i =2;i*i < N;i++){
        if(isprime[i]){
            for(int j = i*i;j <= N;j+=i){
                isprime[j] = false;
            }
        }
    }

}

int main(){
    preprime();
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"2 1"

    }
    return 0;
}