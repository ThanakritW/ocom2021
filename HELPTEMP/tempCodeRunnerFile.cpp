#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll digital_root(ll x){
    if((x/10)==0) return x;
    else{
        cout << "YEET";
        ll dr=0;
        for(ll i=0;i<ceil(x/10.000);i++){
            dr+=i%10;
            i=i/10;
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
            }
            else cout << " not nine\n";
        }
        else cout << " not prime\n";
    }
    return 0;
}