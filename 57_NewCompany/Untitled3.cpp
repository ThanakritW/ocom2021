#include<bits/stdc++.h>
using namespace std;
int pr[10010];
int fp(int a){
    if(pr[a]!=a) pr[a]=fp(pr[a]);
    return pr[a];
}
int n,m,k,t,l,cnt=0,x,y;
set <int> s,ans;
main(){
    cin >>  n >> m;
    for(int i=1;i<=m;i++){
        pr[i]=i;
    }
    for(int i=0;i<n;i++){
        cin >> k;
        if(k==0){
            cnt++;
            continue;
        }
        for(int j=0;j<k;j++){
            cin >> t;
            s.insert(t);
            if(j!=0){
                x=fp(l);
                y=fp(t);
                if(x==l && y!=t){
                    pr[x]=y;
                }
                else{
                    pr[y]=x;
                }
            }
            l=t;
        }
    }
    for(auto e:s){
        ans.insert(fp(e));
    }
    cnt+=ans.size()-1;
    cout << cnt;
}
