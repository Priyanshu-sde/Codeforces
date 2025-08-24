#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i = 0;i < n;i++){
        cin>>s[i];
    }
    vector<int> point(n);

    for(int i = 0; i < m;i++){
        int cnt = 0;
        for(int j = 0;j < n;j++){
            if(s[j][i] == '1'){
                cnt++;
            }
        }
        if(cnt > n - cnt){
            for(int j = 0;j < n;j++){
                if(s[j][i] == '0'){
                    point[j]++;
                }
            }
        }else{
            for(int j = 0;j < n;j++){
                if(s[j][i] == '1'){
                    point[j]++;
                }
            }             
        }

    }
    int ma = *max_element(point.begin(),point.end());
    for(int i = 0;i < n;i++){
        if(point[i] == ma) cout<<i+1<<" ";
    }
    cout<<endl;

    return 0;
}