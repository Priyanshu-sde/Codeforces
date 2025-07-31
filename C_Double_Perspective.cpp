#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int find(int x,vector<int>& parent){
    if(parent[x] != x){
        parent[x] = find(parent[x],parent);
    }
    return parent[x];
}

bool unite(int x,int y,vector<int>& parent){
    x = find(x,parent);
    y = find(y,parent);
    if(x == y) return false;
    parent[y] = x;
    return true;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        vector<pair<int,int>> edges;
        int mver = 0;
        fr(i,n) {
            cin>>a[i]>>b[i];
            edges.push_back({a[i],b[i]});
            mver = max(mver,max(a[i],b[i]));
        }

        vector<int> parent(mver + 1);
        fr(i, mver + 1) parent[i] = i;
        
        vector<int> ans;

        fr(i,n){
            if(unite(a[i],b[i],parent)){
                ans.push_back(i+1);
            }
        }
        cout<<ans.size()<<endl;
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
        // vector<vector<int>> adj(mver + 1);
        // fr(i,n){
        //     adj[a[i]].push_back(b[i]);
        //     adj[b[i]].push_back(a[i]);
        // }
        // vector<bool> vis(mver + 1,j false);
        // vector<int> ans;
        // for(int i = 1;i <= mver;i++){
        //     if(!vis[i]){
        //         if()
        //     }
        // }
        
    }
    return 0;
}