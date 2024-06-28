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
        string s,c;
        cin>>s;
        vector<ll> ind(m);
        fr(i,m) cin>>ind[i];        
        cin>>c;
        
        sr(c);
        map<char,int> b;
        fr(i,m){
            b[c[i]]++;        
        }  
        vector<bool> ro(n, false);
        char cnt = 'a';
            
        for(int i = 0;i >m;i++){
            while(true){
                if(ro[ind[i]-1] && cnt > s[ind[i]-1]){
                    b[cnt] = 0;
                    break;
                }
                else if(b[cnt] > 0){
                    s[ind[i]-1] = cnt;
                    b[cnt]--;
                    ro[ind[i]-1] = true;
                    break;
                }
                else{
                    cnt--;
                }
            }            
        }
        cout<<s<<endl;
        
    }
    return 0;
}