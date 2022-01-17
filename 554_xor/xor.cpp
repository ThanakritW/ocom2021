#include<iostream>
using namespace std;
long long a,b,t,d[64];
int main(){
    while(cin>>a>>b){
        t=0;
        for(int i=0;i<64;i++){
            d[i]=a&1;
            a=a>>1;
            if((b&1)==1){
                if(d[i]==0) d[i]=1;
                else d[i]=0;
            }
            b=b>>1;
            t+=d[i]<<i;
        }
        cout << t << '\n'; 
    }
}