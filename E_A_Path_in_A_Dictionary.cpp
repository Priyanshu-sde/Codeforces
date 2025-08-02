#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool dfs(int x,int y,vector<bool>& vis,vector<set<int>>& adj,vector<int>& st){
    vis[x] = true;
    st.push_back(x);
    if(x == y) return true;
    for(auto it : adj[x]){
        if(!vis[it]){            
            if(dfs(it,y,vis,adj,st)){
                return true;
            }
        }
    }
    st.pop_back();
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
        cin>>n>>m>>x>>y;
        vector<pair<int,int>> edges(m);
        vector<set<int>> adj(n + 1);
        fr(i,m){
            cin>>edges[i].first>>edges[i].second;
            adj[edges[i].first].insert(edges[i].second);
            adj[edges[i].second].insert(edges[i].first);
        }
        vector<int> st;
        vector<bool> vis(n+1,false);
        dfs(x,y,vis,adj,st);
        for(auto it : st){
            cout<<it<<" ";
        }
        cout<<endl;       

    }
    return 0;
}