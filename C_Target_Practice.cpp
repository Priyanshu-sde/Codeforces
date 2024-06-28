#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ar;
        int sum =  0;
        int ri,rj;
        for(int  i = 0;i < 10;i++){
            for(int j = 0; j < 10;j++){
                cin>>ar;
                if(ar == 'X'){
                    i > 4?ri = 9-i:ri= i;
                    j > 4?rj = 9-j:rj= j;
                    if(rj > ri){
                        sum += ri +1;
                    }
                    else{
                        sum += rj + 1;
                    }
                }
            }
        }
        cout<<sum<<endl;

    }
}