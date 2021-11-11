#include<bits/stdc++.h>
using namespace std;
struct chess{
    int x,y,w;
};
bool f[1010][1010];
chess c;
int n,m,dx[]={1,2,2,1,-1,-2,-2,-1},dy[]={2,1,-1,-2,-2,-1,1,2},sx,sy,tx,ty;
char a[1010][1010];
queue<chess> q;
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    cin >> sx >> sy; //start pos
    cin >> tx >> ty; //terminal pos
    q.push({sx,sy,0});
    while(!q.empty()){
        c=q.front();
        q.pop();
        if(c.x==tx && c.y==ty){
            cout << c.w;
            return 0;
        }
        for(int i=0;i<8;i++){
            if(!f[c.x+dx[i]][c.y+dy[i]] && a[c.x+dx[i]][c.y+dy[i]]=='.'){
                f[c.x+dx[i]][c.y+dy[i]]=1;
                q.push({c.x+dx[i],c.y+dy[i],c.w+1});
            }
        }
        
    }
    cout << "-1";
    return 0;
}