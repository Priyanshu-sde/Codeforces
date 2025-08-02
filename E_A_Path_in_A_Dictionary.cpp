#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool dfs(int x,int y,vector<int>& vis,vector<set<int>>& adj,stack<int>& st){
    st.push(x);
    for(auto it : adj[x]){
        if(!vis[it]){
            vis[it] = true;
            if(dfs(it,y,vis,st)){
                return true;
            }
        }
    }
    st.pop();
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>>x>>y;
        vector<pair<int,int>> edges(m);
        vector<set<int>> adj(n);
        fr(i,m){
            cin>>edges[i].first>>edges[i].second;
            adj[edges[i].first].insert(edges.second);
            adj[edges[i].second].insert(edges.first);
        }
        stack<int> st;
        dfs(x,y,vis,adj,st);
        for(auto it: st){
            cout<<it<<" ";
        }
        cout<<endl;       

    }
    return 0;
}