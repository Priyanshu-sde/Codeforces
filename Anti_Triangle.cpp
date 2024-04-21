#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long int l;
        cin >> n >> l;
        int j = 0;
        
        for (int i = 1; i <= n ; i++) {
            if (2 * i - 3 <= l) {
                cout << i << " ";
                j++;
            }
            else{
                if(j == 0)
                j = i;
                cout<<j+n<< " ";
                j += n;
                
            }
        }
        cout<<endl;


        
    }

}