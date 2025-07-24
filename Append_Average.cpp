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
    int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    int mi = 0;
        ll smi = LLONG_MAX;
	    for(int i = 0;i < n;i++){
            cin>>a[i];
        }
	    long long sum = accumulate(a,a+n,0);
	    for(int i = 1;i < n;i++){
	        if(a[mi] > a[i]){
                mi = i;
            }
	    }
        for(int i = 0;i < n;i++){
            if(smi > a[i] && i != mi){
                smi = a[i];
            }
        }

        while((a[mi] + smi + 1)/2 != a[mi] + 1 && k > 0){
            sum += (a[mi] + smi + 1)/2;
            smi = (a[mi] + smi + 1)/2;
            k--;            
        }
        cout<<sum+k*(a[mi])<<endl;
	}
    return 0;
}