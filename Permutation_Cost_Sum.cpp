#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define debug(x) cerr << #x << " = " << x << endl;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        long long n;
	    cin>>n;
	    vector<long long> p(n);
	    long long cnt = 0LL;
	    long long cnt2 = 0LL;
	    for(int i =0;i < n;i++){
	        cin>>p[i];
	        if(p[i] == i + 1) cnt++;
	    }
	    vector<bool> vis(n,false);
	    for(int i = 0;i < n;i++){
	        if(!vis[i]){
	            int curr = i;
                vis[curr] = true;
	            while(p[curr] != i + 1 && !vis[curr] ){
	                curr = p[curr] - 1;
	                vis[curr] = true;
	            }
                cnt2++;
	            
	        }
	    }
	    long long ans = 0LL;
	    long long rem = n -cnt;
	    long long rem2 = n -cnt2;
        debug(t)
	    for(int i =0;i < n;i++){
	        long long ni = n-i;
	        long long mdf =(rem)*((ni)*(ni+1)/2 - ((i)*(i+1))/2);
	        long long swp = (rem2*((i)*(i+1))/2 );

            debug(mdf)
            debug(swp)
	        ans = (ans + mdf + swp);
	    }
	    cout<<ans<<endl;
    }
    return 0;
}