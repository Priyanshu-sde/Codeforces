#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m;
        cin>>m;
        string b;
        cin>>b;
        string c;
        cin>>c;
        string f = "";
        for(int i =0; i < m;i++){
            if(c[i] == 'V'){
                f+=b[i];
            }
            else {
                s+=b[i];
            }
        }
        reverse(f.begin(),f.end());
        for(int i = 0;i < s.length();i++){
            f+=s[i];
        }
        cout<<f<<endl;
    }
    return 0;
}