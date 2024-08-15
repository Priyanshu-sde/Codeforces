long long c1 = 0, c0 = 0,ans =0;
	    for(int i = n-1;i >= 0;i--){
	        if(s[i] == '1'){
	            ans += c0;
	        }
	        else{
	            c0++;
	        }
	    }
	    cout<<ans<<endl;