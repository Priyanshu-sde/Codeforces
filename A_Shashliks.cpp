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
            ll k,a,b,x,y;
            cin>>k>>a>>b>>x>>y;

            ll ans = 0,tans = 0;
            if(x <= y){
                ans += max((k-a + x -1 )/x,0LL);
                if((k-ans*x) >= a) ans++;

                tans =  max(((k-ans*x) - b + y -1)/y,0LL);
                if(k-ans*x - tans*y >= b)ans++;
                ans += tans;
            }
            else{
                ans += max((k-b + 1 + y -1 )/y,0LL);
                if((k-ans*y) >= b) ans++;

                tans = max(((k-ans*y) - a + x -1)/x,0LL);
                if(k-ans*y - tans*x >= a)ans++;
                ans += tans;
            }
            cout<<ans<<endl;
        }
        return 0;
    }