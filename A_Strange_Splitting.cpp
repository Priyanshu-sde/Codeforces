#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ma1 = 0,ma2=0,mi1=n-1,mi2;
        vector<long long int> ar(n);
        for(int i = 0;i < n;i++){
            cin>>ar[i];
            
            
        }
        int fl = -1;
        for(int i = 1;i < n;i++){
            if(ar[i] != ar[i-1]){
                fl = i;
                break;
            }            
        }
    if(fl == n-1){
        fl--;
    }
        if(fl == -1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i = 0;i < n;i++){
                if(i == fl){
                    cout<<"B";
                }
                else{
                    cout<<"R";
                }
            }
            cout<<endl;
        }
        

    }
    return 0;
}