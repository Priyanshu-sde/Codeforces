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
        vector<int> a(16);

        for(int i = 0; i < 16;i++){
            cin>>a[i];
        }
        vector<int> c(4);
        c[0] = 1;
        c[1] = 3;
        c[2] = 7;
        c[3] = 15;
        for(int i = 0; i < 16;i++){
            int b = 0,d = 0;
            for(int j = 0; j < 16;j++){
                if(a[i] > a[j]){
                        b++;
                }
            }
            for(int j = 0; j < 4;j++){
                if(c[j] <= b){
                    d++;
                }
            }
            cout<<d<<" ";
            
            
        }
        cout<<endl;

    }

}