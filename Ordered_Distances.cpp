#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

bool cmp(pair<int,int> &x, pair<int,int> &y){
    if(x.first == y.first) return x.second < y.second;
    return x.first < y.first;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        bool fl = true;

        int j = 0;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        
        vector<ll> b(n);
        fr(i,n) cin>>b[i];
        int ans = -1;
        fr(i,n){
            if(a[i] == b[0]){
                ans = i + 1;
                break;
            }
        }
        if(ans == -1){
            cout<<ans<<endl;  
            continue;
        }   
        else{
            vector<pair<int,int>> p;
            fr(i,n){
                p.push_back({abs(a[i]-a[ans-1]),a[i]});
            }
            sort(p.begin(), p.end(), cmp);
            for(auto it: p){
                if(b[j] != it.second){
                    fl = false;
                    break;
                }
                j++;
            }
            if(fl){
                cout<<ans<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
        }   
	    
	}
	

}
