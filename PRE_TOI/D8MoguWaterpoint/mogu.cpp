#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,p,a[1001000],r=0,l,m,ansa,ansb;
bool f;
int main(){
    cin >> n >> p;
    for(int i=0;i<n;i++){
        cin >> a[i];
        r=max(r,a[i]);
    }
    l=0;
    f=false;
    while(l<r){
        m=l+((r-l)/2);
        //cout << m << ' ';
        ll total=0;
        for(int i=0;i<n;i++) total+=a[i]/m;
        //cout << total << '\n';
        if(total>=p){
            if(total==p){
                ansa=m;
                f=true;
            }else ansb=m;
            l=m+1;
        }
        else r=m;
    }
    f ? cout << "YES\n" << ansa : cout << "NO\n" << ansb;
    return 0;
}