#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        map < int, int > mp;
        int ans[n+1];
        memset(ans, 0, n + 1);
        for (int i = 1; i <= n; i++) {
            if (x | i > max(i, x)) {
                ans[i] = x ^ i;
                mp[ans[i]]++;
            }
        }
        
            for (int i = 1; i <= n; i++) {
                if (ans[i] == 0) {
                    ans[x] = i;
                    mp[i]++;
                    break;
                }
            }
        int ind = 1;
        for (int i = 1; i <= n; i++) {
            if (ans[i] == 0 || ans[i] > n) {
                while (mp[ind] != 0) {
                    ind++;
                }
                ans[i] = ind;
                mp[ind]++;
                ind++;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }


}