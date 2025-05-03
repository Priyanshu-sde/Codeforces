#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

#include <bits/stdc++.h>
using namespace std;

long long power(long long A, long long B)
{
    if (B == 0)
        return 1;

    long long res = power(A, B / 2);

    if (B % 2)
        return res * res * A;
    else
        return res * res;
}

int main()
{
    cout << power(2, 12) << "\n";
    return 0;
}


int main(){
    int t = 1;
    while(t--){
        int n;
        cin>>n;
        int x = 0
    }
    return 0;
}