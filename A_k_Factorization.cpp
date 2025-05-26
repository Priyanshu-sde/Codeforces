#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 100001;
#define all(a) a.begin(),a.end()

int spf[N];

void calculate_spf(){
    for(int i = 0;i < N;i++){
        spf[i] = i;
    }
    spf[0] = spf[1] = 1;
    for(int i = 2;i*i < N;i++){
        if(spf[i] == i){
            for(int j = i*i;j < N;j += i){
                spf[j] = i;
            }
        }
    }
}

vector<int> get_pfac(long long n){
    vector<int> ans;
    while(n > 1){
        ans.push_back(spf[n]);
        n /= spf[n];
    }
    return ans;

}

int main(){
    calculate_spf();
    int n,k;
    cin>>n>>k;
    auto fact = get_pfac(n);
    if(fact.size() < k) cout<<-1<<endl;
    else{
        int last = 1;
        for(int i = 0;i < fact.size();i++){
            if(i < k - 1){
                cout<<fact[i]<<" ";
            }
            else{
                last *= fact[i];
            }
            
        }
        cout<<last<<endl;
    }
    return 0;
}