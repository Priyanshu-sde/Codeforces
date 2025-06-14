#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int h,w;
    cin>>h>>w;
    int a[h][w];
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin>>a[i][j];
        }
    }
    int op = 0;
    vector<vector<int>> ans;
    for(int i = 0;i < h;i++){
        if(i&1){
            for(int j = w-1; j >= 0;j--){
                if(a[i][j]&1 && j != 0){
                    a[i][j-1]++;
                    a[i][j]--;
                    op++;
                    vector<int> p = {i,j,i,j-1};
                    ans.push_back(p);
                }
                else if(a[i][j]&1 && j == 0 && i != h-1){
                    a[i+1][j]++;
                    a[i][j]--;
                    op++;
                    vector<int> p = {i,j,i+1,j};
                    ans.push_back(p);
                }
            }
        }
        else{
            for(int j = 0;j < w;j++){
                if(a[i][j]&1 && j != w-1){
                    a[i][j+1]++;
                    a[i][j]--;
                    op++;
                    vector<int> p = {i,j,i,j+1};
                    ans.push_back(p);
                }
                else if(a[i][j]&1 && j == w-1 && i != h -1){
                    a[i+1][j]++;
                    a[i][j]--;
                    op++;
                    vector<int> p = {i,j,i+1,j};
                    ans.push_back(p);
                }
            }
    }
    

    }
    cout<<op<<endl;
    for(int i = 0;i < (int)ans.size();i++){
        for(int j = 0;j < 4;j++){
            cout<<ans[i][j]+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}   