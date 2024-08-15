#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;
bool isPrime(ll n) 
{ 
    
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
   
     
    if (n%2 == 0 || n%3 == 0){
        return false; 
        }
   
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
   
    return true; 
} 

ll nextPrime(ll N)
{
    if(isPrime(N)){
        return N;
    }
    if (N <= 1)
    return 2;
 
    int prime = N;
    bool found = false;
 
    
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
ll nextPrime1(ll N)
{
    
    if (N <= 1)
    return 2;
 
    int prime = N;
    bool found = false;
 
    
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
int main(){

    int t;
	cin>>t;
	while(t--){
	    ll x;
	    cin>>x;
        ll a1 = 0, a2 =0;
        a1 = nextPrime(x);
        a2 = nextPrime1(a1);
        cout<<a1*a2<<endl;
        	    
	}

}