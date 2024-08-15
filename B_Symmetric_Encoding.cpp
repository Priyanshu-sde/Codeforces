#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i = 0;i < n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> au;
        fr(i,n){
            au.insert(s[i]);
        }
        int si = au.size();
        fr(i,n){
            auto ind = find(au.begin(),au.end(),s[i]);
            int index = distance(au.begin(),ind);
            s[i] = *next(au.begin(),si-index-1);
        }
        cout<<s<<endl;
    }
    return 0;
}