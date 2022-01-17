#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define x first
#define y second
using namespace std;
pii a[100100];
ll ans=0;
void ms(int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        ms(l,m);
        ms(m+1,r);
        ll temp[r];
        ll qs[r+1];
        qs[l-1]=0;
        qs[l]=a[l].y;
        for(int i=l+1;i<=r;i++) qs[i]=qs[i-1]+a[i].y;
        int i=l,j=m+1,k=l;
        while(i<=m && j<=r){
            if(a[i].y<=a[j].y){
                temp[k++]=a[i++].y;
            }else{
                ans+=qs[m]-qs[i-1]+((a[j].y)*(m-i+1));
                temp[k++]=a[j++].y;
            }
        }
        while(i<=m)
            temp[k++]=a[i++].y;
        while(j<=r)
            temp[k++]=a[j++].y;
        for(int i=l;i<=r;i++){
            a[i].y=temp[i];
        }
    }
}
ll n,ta,tb;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ta >> tb;
        a[i]={tb,ta};
    }
    sort(a,a+n);
    ms(0,n-1);
    cout << ans;
    return 0;
}