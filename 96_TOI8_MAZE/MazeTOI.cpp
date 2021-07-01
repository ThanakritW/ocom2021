c#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,w;
    bool friend operator<(node a, node b){
        if(a.x==b.x) return a.y<b.y;
        return a.x<b.x;
    }
};
int n,m,sx,sy,tx,ty,a[160][160],f[160][160],f2[160][160],v[160][160],ans=INT_MAX;
queue<node> q;
set<node> s;
main(){
    cin >> n >> m;
    cin >> sx >> sy >> tx >> ty;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    q.push({sx,sy,1});
    f[sx][sy]=1;
    while(!q.empty()){
        node c=q.front();
        q.pop();
        if(a[c.x][c.y]==0){
            continue;
        }
        for(int i=-1;i<2;i+=2){
            if(c.x+i<=n && c.x+i>0 && f[c.x+i][c.y]==0){ q.push({c.x+i,c.y,c.w+1}); f[c.x+i][c.y]=c.w+1;}
            if(c.y+i<=m && c.y+i>0 && f[c.x][c.y+i]==0){ q.push({c.x,c.y+i,c.w+1}); f[c.x][c.y+i]=c.w+1;}
        }
    }
    q.push({tx,ty,1});
    f2[tx][ty]=1;
    while(!q.empty()){
        node c=q.front();
        q.pop();
        if(f[c.x][c.y]!=0){
//            cout << c.x << " " << c.y << '\n';
            ans=min(ans,(c.w+f[c.x][c.y]-1));
            s.insert({c.x,c.y,0});
            continue;
        }
        if(a[c.x][c.y]==0) continue;
        for(int i=-1;i<2;i+=2){
            if(c.x+i<=n && c.x+i>0 && f2[c.x+i][c.y]==0){ q.push({c.x+i,c.y,c.w+1}); f2[c.x+i][c.y]=c.w+1;}
            if(c.y+i<=m && c.y+i>0 && f2[c.x][c.y+i]==0){ q.push({c.x,c.y+i,c.w+1}); f2[c.x][c.y+i]=c.w+1;}
        }
    }
    cout << s.size() << '\n' << ans;
}
