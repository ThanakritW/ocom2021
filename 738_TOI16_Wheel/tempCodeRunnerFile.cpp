#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,mx,lc[15],mn=LLONG_MAX;
string s[15];
vector<ll> v[15];
void spin(ll x,ll pos){
    if(x==n+1) mn=min(mn,pos);
    else{
        for(ll i=0;i<lc[x];i+=lc[x-1]){
            if(i+pos>mn) break;
            else if(s[x][(pos+i)%s[x].size()] == k){
                spin(x+1,pos+i);
            }
        }
    }
}
int main(){
    cin >> n >> k;
    lc[0]=1;
    for(int i=1;i<=n;i++){
        cin >> s[i];
        lc[i]=s[i].size()*lc[i-1]/__gcd(lc[i-1],s[i].size());
    }
    spin(1,1);
    cout << mn;
}