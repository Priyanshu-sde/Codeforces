#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int fl = 0;
        int rx = 0,ry = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == 'L')
            rx--;
            else if(s[i] == 'R')
            rx++;
            else if(s[i] == 'U')
            ry++;
            else
            ry--;
            int cnt = abs(rx-x) + abs(ry -y);
            if(cnt<=i+1 && (i - cnt +1) %2 == 0){
                fl = 1;
                break;
            }
        }
        if(fl)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
