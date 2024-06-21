#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int sn,sm;
        cin>>sn>>sm;
        string n,m;
        cin>>n;
        cin>>m;
        int ans = 0 ,fl =0;
        
        while(fl != 1 && ans  < 26){
            if(m<n){
                fl = 1;
                break;
            }
            for(int i = 0;i<sn;i++){
                int j;
                for(j = i;j<sm + i && j < sn;j++){
                    if(n[j] != m[j-i]){
                        break;
                    }
                }
                if(j==sm){
                fl = 1;
                break;
                }
            }
            sn *= 2;
            n += n;
            ans++;
        }
        if(fl)
        cout<<ans<<endl;
        else
        cout<<-1<<endl;

        

    }  
        

    
 return 0;
}
