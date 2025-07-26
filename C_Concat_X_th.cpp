#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

void generate(int pos, int k, int n, vector<int>& curr, const vector<string>& s, vector<string>& str) {
    if (pos == k) {
        string concat;
        for (int idx : curr) {
            concat += s[idx];
        }
        str.push_back(concat);
        return;
    }
    for (int i = 0; i < n; i++) {
        curr[pos] = i;
        generate(pos + 1, k, n, curr, s, str);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,x;
    cin>>n>>k>>x;
    vector<string> s(n);
    vector<string> str;
    vector<int> a(k,0);
    for(int i = 0;i < n;i++){
        cin>>s[i];
    }
    generate(0,k,n,a,s,str);
    sort(str.begin(),str.end());
    
    cout<<str[x-1]<<endl;
    
    
    
    return 0;
}