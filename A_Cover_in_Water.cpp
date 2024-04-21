#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> arr;
        char a;
        int e = 0,flag = 0;

        for(int i = 0;i < n;i++){
            cin>>a;
            arr.push_back(a);
        }
        arr.push_back('#');
        arr.push_back('#');
        for(int i = 0;i < n;i++){
            if(arr[i] == '.' && arr[i+1] == '.' && arr[i+2] == '.'){
                flag = 1;   
                break;             
            }
            if(arr[i] == '.')
            e++;
            
        }

        if(flag)
        cout<<"2"<<endl;
        else
        cout<<e<<endl;



        
    }
 return 0;
}