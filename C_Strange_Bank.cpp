#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n;
    cin>>n;
    vector<int> st;
    for(int i = 1;i <= n;i = i*6){
        st.push_back(i);
    } 
    for(int i = 9;i <= n;i = i*9){
        st.push_back(i);
    }
    sort(st.begin(),st.end());
    int op = 0;
    for(int i = st.size()- 1;i >= 0;i--){
        if(st[i] <= n){
            op++;
            n -= st[i];
            i++;
        }
    }
    cout<<op<<endl;
    return 0;
}