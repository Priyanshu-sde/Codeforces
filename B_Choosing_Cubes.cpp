#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> ar(n);
        for(int i = 0;i < n;i++){
            cin>>ar[i];
        }
        int te = ar[f-1];
        sort(ar.begin(),ar.end(),greater<int>());
        if( k == n)
        cout<<"YES"<<endl;
        else if(ar[k-1] == te && ar[k] == te){
            cout<<"MAYBE"<<endl;
        }
        else if(ar[k-1] <= te){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}