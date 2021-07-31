#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll digital_root(ll x){
    if((x/10)==0) return x;
    else{
        ll dr=0;
        ll temp=x;
        for(ll i=0;i<ceil(x/10.000);i++){
            dr+=temp%10;
            temp=temp/10;
        }
        return digital_root(dr);
    }   
}
int main(){
    for(ll i=2;i<LLONG_MAX;i++){
        bool prime=true;
        cout << i << " ";
        for(ll j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime=false; break;
            }
        }
        if(prime){
            ll droot=digital_root(i);
            if(droot==9){
                cout << " nine\n";
                getchar();
            }
            else cout << " not nine\n";
        }
        else cout << " not prime\n";
    }
    return 0;
}