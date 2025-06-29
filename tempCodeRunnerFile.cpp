= 0;
    for(int step = 1;step <= 3;step++){
        if(level+step <= n){
            ans += rec(level+step);
        }
    }
    return ans;
     
}
