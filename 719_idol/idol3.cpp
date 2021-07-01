#include<bits/stdc++.h>
using namespace std;
int n,x[12350],y[12350],d[12350],c,mx,nxt,t,ans=0;
bool f[12350];
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    d[0]=INT_MAX;
    c=0;
    for(int i=0;i<n;i++){
        mx=0;
        nxt=-1;
        f[c]=1;
        for(int j=0;j<n;j++){
            if(!f[j]){
                t=max(abs(x[c]-x[j]),abs(y[c]-y[j]));
                d[j]=max(d[j],t);
                if(mx<d[j]){
                    mx=d[j];
                    nxt=j;
                }
            }
        }
        c=nxt;
        ans+=mx;
    }
    cout << ans;
}
