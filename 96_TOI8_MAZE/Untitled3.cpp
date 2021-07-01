#include<bits/stdc++.h>
using namespace std;
bool f[160][160][3];
int n,m,tx,ty,sx,sy,a[160][160],d[160][160][2];
set<pair<int,int>> s;
int path(int x,int y,int b){
    if(x>n || y>m || x<1 || y<1) return 999999;
    if((b==0 && a[x][y]==0) || f[x][y][b]==1) return 999999;
    if(x==tx && y==ty) {return 1;}
    else if(d[x][y][b]) return d[x][y][b];
    else{
        if(a[x][y]==0)b=0;
        f[x][y][b]=1;
        d[x][y][b]=min({
            (path(x+1,y,b)),
            (path(x,y+1,b)),
            (path(x-1,y,b)),
            (path(x,y-1,b))
        });
        f[x][y][b]=0;
        if(d[x][y][b]<99999){
            if(a[x][y]==0) s.insert({x,y});
            return d[x][y][b]+1;
        }
        else{
            return d[x][y][b];
        }
    }
}
int ans;
main(){
    cin >> n >> m;
    cin >> sx >> sy;
    cin >> tx >> ty;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    cout << '\n';
    cout << s.size() << "\n" << ans;
}
