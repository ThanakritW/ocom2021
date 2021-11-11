#include<bits/stdc++.h>
using namespace std;
int ans,mx,sum,t;
int main(){
    for(int i=1;i<=5;i++){
        sum=0;
        for(int j=0;j<4;j++){
            cin >> t;
            sum+=t;
        }
        if(sum>mx){
            mx=sum;
            ans=i;
        }
    }
    cout << ans << " " << mx;
    return 0;
}