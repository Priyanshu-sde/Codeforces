#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) {}
            for (int i = p * p; i <= n; i += p){
                prime[i] = false;
        }
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long long int c;
	    cin>>n>>c;
	    vector<long long int> a(n);
	    for(int i = 0;i< n;i++){
	        cin>>a[i];
	    }
	    long long int cost;
	    vector<long long int> b(n);
	    for(int i = 0;i < n;i++){
	        for(int j = i+1;j<n;j++){
	            cost = a[i]*a[j];
	            b[i] += cost;
	            b[j] += cost;
	        }
	    }
	    srd(b);
	    while(true){
	        if(b[b.size()-1] <= c){
                c -= b[b.size()-1];
	            b.pop_back();	            
                if(b.size() == 0){
                    break;
                }	
                for(int i = 0;i < b.size();i++){ 
                    b[i] -=      

	        }
	    }
	    
	    
	}

}
