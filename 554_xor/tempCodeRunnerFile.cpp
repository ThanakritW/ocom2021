#include<bits/stdc++.h>
using namespace std;
long long a,b,d[100],n=0,ans[11000],total;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(cin>>a>>b){
        for(int i=0;i<64;i++){
            d[i]=a&1;
            a=a>>1;
        }
        for(int i=0;i<64;i++){
            if((b&1)==1){
                if(d[i]==0) d[i]=1;
                else d[i]=0;
            }
            b=b>>1;
        }
        total=0;
        for(int i=0;i<64;i++){
            total+=d[i]<<i;
        }
        cout << total << '\n'; 
    }
    return 0;
}