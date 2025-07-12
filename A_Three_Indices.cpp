#include<bits/stdc++.h>
using namespace std;


#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ;i < n;i++){
            cin>>a[i];
        }
        for(int i = 0 ;i < n;i++){
            for(int j = i+1;j < n;j++){
                for(int k = j+1;k < n;k++){
                    if(a[i] < a[j] && a[j] > a[k]){
                        cout<<"YES"<<endl<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                        n = -1;
                        break;
                    }

                }
            }
        }
        if(n != -1)
        cout<<"NO"<<endl;
    }
}