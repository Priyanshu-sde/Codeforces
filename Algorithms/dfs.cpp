#include <btstd++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    for(int child: g[vertex]){

        dfs(child);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    
}

