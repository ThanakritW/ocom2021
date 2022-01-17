#include<bits/stdc++.h>
#define xi dx[i]
#define yi dy[i]
using namespace std;
struct node{
    int x,y,w,s;
    bool friend operator < (node a,node b){
        return a.w>b.w;
    }
};
int n,a[60][60],sy,sx,tx,ty,d[60][60][2],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
priority_queue<node> q;
node c;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            for(int k=0;k<2;k++)
                d[i][j][k]=5e7;
        }
    cin >> sx >> sy >> tx >> ty;
    d[sx][sy][0]=0;
    q.push({sx,sy,0,0});
    while(!q.empty()){
        c=q.top(); q.pop();
        if(c.w!=d[c.x][c.y][c.s]) continue;
        if(c.x==tx && c.y==ty && c.s==1){
            cout << c.w; break;
        }
        for(int i=0;i<4;i++){
            int x=c.x+xi,y=c.y+yi;
            if(x>n || x<1 || y>n || y<1) continue;
            if(a[x][y]>=0){
                if(d[x][y][c.s]>c.w+a[x][y]){
                    d[x][y][c.s]=c.w+a[x][y];
                    q.push({x,y,d[x][y][c.s],c.s});
                }
            }else{
                if(d[x][y][(c.s+1)%2]>c.w-a[x][y]){
                    d[x][y][(c.s+1)%2]=c.w-a[x][y];
                    q.push({x,y,d[x][y][(c.s+1)%2],(c.s+1)%2});
                }
            }
        }
    }
    return 0;
}