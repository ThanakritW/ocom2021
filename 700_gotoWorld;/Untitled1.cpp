#include<bits/stdc++.h>
using namespace std;
int p[200100];
set<int> s;
int fpans(int w){
    if(p[w]!=w) p[w]=fpans(p[w]);
    return p[w];
}
int fp(int w){
    int temp=fpans(w);
    if(s.find(p[w])!=s.end()){
        return 1;
    }
    return p[w];
}
int a,b,n,m,x,y,g[200100],q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        p[i]=i;
    }
    for(int i=0;i<m;i++){
        cin >> a;
        cin >> b;
        x=fp(a);
        y=fp(b);
        if(x!=y){
            if(x==1){
                g[fpans(y)]=i;
                s.insert(fpans(y));
            }
            else if(y==1){
                g[fpans(x)]=i;
                s.insert(fpans(x));
            }
            else{
                p[x]=y;
            }
        }
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a;
        cout << g[fpans(a)]+1 << '\n';
    }
    return 0;
}
