#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        char a[n][m];
        int cnt = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<int>> diff(n+2, vector<int>(m+2, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(a[i][j] == 'g'){
                    cnt++;
                    int x1 = max(0, i - k);
                    int y1 = max(0, j - k);
                    int x2 = min(n - 1, i + k);
                    int y2 = min(m - 1, j + k);

                    diff[x1][y1] += 1;
                    diff[x2 + 1][y1] -= 1;
                    diff[x1][y2 + 1] -= 1;
                    diff[x2 + 1][y2 + 1] += 1;
                }
            }
        }

        vector<vector<int>> res(n, vector<int>(m, 0));
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(i > 0) diff[i][j] += diff[i - 1][j];
                if(j > 0) diff[i][j] += diff[i][j - 1];
                if(i > 0 && j > 0) diff[i][j] -= diff[i - 1][j - 1];
                res[i][j] = diff[i][j];
            }
        }

        int mi = INT_MAX;
        int x = 0,y = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(a[i][j] == '.' && res[i][j] < mi){
                    mi = res[i][j];
                    x = i,y = j;
                }
            }
        }
        if(mi == INT_MAX){
            mi = 0;
        }
        cout<<cnt-mi<<endl;





    }
    return 0;
}