#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll b;
        vector<vector<ll>> a(n);
        fr(i,n){
            fr(j,m){
                cin>>b;
                a[i].push_back(b);
            }
        }
        ll mi = -1;
        fr(i,n){
            fr(j,m){
                mi = -1;
                if((i==0 || a[i][j] > a[i-1][j]) && (j == 0 || a[i][j] > a[i][j-1]) && (j==m-1 || a[i][j] > a[i][j+1]) && (i==n-1 ||a[i][j] > a[i+1][j]))
                {
                    if(i!=0){
                    if(a[i][j] > a[i-1][j]){
                                             
                        mi = a[i][j]-a[i-1][j];
                    }
                }
                
                if(j != 0){
                    if(a[i][j] > a[i][j-1]){
                        if(mi == -1)   
                        mi = a[i][j]-a[i][j-1];
                        else
                        mi = min(mi,a[i][j]-a[i][j-1]);
                    }
                }
                if(j!=m-1){
                    if(a[i][j] > a[i][j+1]){
                        if(mi == -1)
                        mi = a[i][j]-a[i][j+1];
                        else
                        mi = min(mi,a[i][j]-a[i][j+1]);
                    }
                }
                if(i!=n-1){
                    if(a[i][j] > a[i+1][j]){
                        if(mi == -1)
                        mi = a[i][j]-a[i+1][j];
                        mi = min(mi,a[i][j]-a[i+1][j]);
                    }
                }
                if(mi != -1)
                a[i][j] -= mi;
                }
            }
        }
        fr(i,n){
            fr(j,m){
                cout<<a[i][j]<<" ";                
            }
            cout<<endl;
        }           
        
    }
    return 0;
}