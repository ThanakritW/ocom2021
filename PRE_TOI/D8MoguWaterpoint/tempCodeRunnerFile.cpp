#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,p;
double a[100100],r=0,l,m,ansa,ansb,total;
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
        total=0;
        for(int i=0;i<n;i++) total+=a[i]/m;
        if(total>=p){
            if(total==p){
                ansa=m;
                f=true;
            }else ansb=m;
            l=m+1;
        }
        else r=m;
    }
    if(f){
        printf("YES\n%.01f",ansa);
    }else printf("NO\n%.01f",ansb);
    return 0;
}