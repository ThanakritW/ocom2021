#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long n,s;
int digit(ll x){
    string s=to_string(x);
    ll total=0;
    for(auto e:s) total+=e-'0';
    return total;
    while(x>0){
        total+=x%10;
        x=x/10;
    }
}
int main(){
    cin >> n >> s;
    ll mx=n-digit(n);
    if(mx<s){
        cout << "0\n-1";
    }
    else{
        ll l=0,r=LLONG_MAX,m;
        while(l<r){
            m=l+(r-l)/2;
            int sum=digit(m);
            if(m-sum<s){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        if(l-digit(l)<s) cout << "0/n-1";
        cout << n-m+1 << '\n' << n;
    }
    return 0;
}