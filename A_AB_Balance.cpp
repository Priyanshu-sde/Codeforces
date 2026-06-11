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
    int t = 1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool fl = false;
        int n = s.length();
        for(int i = 1;i < n;i++){
            if(s[i-1] != s[i]){
                fl = true;
                break;
            }
        }
        if(s[0] == s[n-1]) fl =  false;
        if(!fl) {
            cout<<s<<endl;
            continue;
        }else{
            s[0] = s[0] == 'a' ? 'b' : 'a';
        }
        
        cout<<s<<endl;
    }
    return 0;
}