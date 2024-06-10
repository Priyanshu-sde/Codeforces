#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int ans = 0;
        vector<int> ar(7);
        for(int i = 0;i < 7;i++){
            ar[i] = 0;
        }
        for(int i = 0;i < n;i++){
            ar[s[i]-'A']++;
        }
        for(int i = 0;i < 7;i++){
            ans  += max(0,m-ar[i]);
        }
        cout<<ans<<endl;



    }
    return 0;
}