#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define debug(x) cerr << #x << " = " << x << endl;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        stack<char> st;
        bool fl = true;
        for(int i = 1;i < 2*n;i++){
            
            if(!st.empty() && st.top() != s[i]){
                ans += st.size();
                st.pop();
            }
            else if(!st.empty() && st.top() == s[i]){
                st.push(s[i]);
            }
            else if(st.empty() && s[i-1] == s[i] && fl){
                st.push(s[i]);
                fl = false;
            }   
            else if(st.empty() && s[i-1] == s[i] && !fl){
                fl = true;
            }      
        }
        ans += st.size();
        cout<<ans<<endl;
    }
    return 0;
}