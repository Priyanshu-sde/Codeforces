#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n,q,p,min = 0;
    cin>>n>>q;
    vector<int> a(n+1,0);
    int ind = 0;
    fr(i,q) {
        cin>>p;
        if(p > 0){
            a[p]++;
            cout<<p<<" ";
        }
        else{
            while(a[ind+1] > min){
                ind++;
                if(ind == n) {
                    ind = 0;
                    min++;
                }
            }
            a[ind+1]++;
            cout<<ind+1<<" ";
        }

    }
    cout<<endl;
    
    

    
    return 0;
}