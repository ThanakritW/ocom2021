#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll x[15010],y[15010],n,w,d[15010],ln[15010],cnt,ans=0;
bool f[15010];
ll dist(int a,int b){
    return abs(x[a]-x[b])+abs(y[a]-y[b]);
}
int main(){
    cin >> n >> w;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
        d[i]=INT_MAX;
        ln[i]=i;
    }
    d[0]=0;
    cnt=0;
    while(1){
        if(cnt==n-w) break;
        ll mx=INT_MAX;
        ll cn=0;
        for(int i=0;i<n;i++){
            if(!f[i] && d[i]<mx){
                mx=d[i];
                cn=i;
            }
        }
        cout << cn << " " << ln[cn] << '\n';
        ans+=dist(cn,ln[cn]);
        f[cn]=1;
        for(int i=0;i<n;i++){
            if(i!=cn){
                if(d[i]>d[cn]+dist(i,cn)){
                    d[i]=d[cn]+dist(i,cn);
                    ln[i]=cn;
                }
            }
        }
        cnt++;
    }
    cout << ans;
    return 0;
}