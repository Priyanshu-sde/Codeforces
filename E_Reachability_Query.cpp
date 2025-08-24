#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
int fa[200001];
map<int,int> mp;

void init(int n) {
    for(int i = 1; i <= n; i++) fa[i] = i;
} 


int find(int x) {
    if(fa[x] == x) return x;
    return fa[x] = find(fa[x]);
} 


bool check(int x, int y) {
    int fx = find(x), fy = find(y);
    return fx == fy;
}


void merge(int x, int y) {
    if(check(x, y)) return ;
    fa[find(x)] = find(y);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    init(n);
    vector<bool> col(n+1,false);
    while(q--){
        int t;
        cin>>t;
        if(t== 1){
            int u,v;
            cin>>u>>v;
            if(mp[u] > 0){
                mp[find(v)] += mp[find(u)];
                mp[find(u)] = 0;
            }
            merge(u,v);
        }
        else if(t == 2){
            int v;
            cin>>v;
            col[v] = !col[v];
            if(col[v]){
                mp[find(v)]++;
            }
            else{
                mp[find(v)]--;
            }
        }
        else {
            int v;
            cin>>v;
            if(mp[find(v)] > 0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

        }
    }
    return 0;
}