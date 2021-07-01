#include<bits/stdc++.h>
using namespace std;
main(){
    cin >>n >> k
    for(int i=0;i<n;i++){
        cin >> t;
        if(t==1){
            if(combo+ncombo>n){
                ans++;
                mx=max(mx,combo);
                combo=ncombo-1;
            }
            ncombo=0;
        }
        ncombo+=t;
    }
}
