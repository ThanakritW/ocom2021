#include<bits/stdc++.h>
#define gx c.x+dx[i]
#define gy c.y+dy[i]
using namespace std;
struct node{
    int x,y,t,w;
    bool friend operator< (node a,node b){
        if(a.t==b.t) return a.w>b.w;
        return a.t>b.t;
    }
};
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1},n,m,sx,sy,tx,ty;
char a[60][60];
bool f[60][60];
node c;
priority_queue<node> q;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    while(cin >> n >> m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                f[i][j]=0;
                cin >> a[i][j];
                if(a[i][j]=='A'){
                    sx=i;sy=j;
                }else if(a[i][j]=='B'){
                    tx=i;ty=j;
                }
            }
        }
        bool im=true;
        f[sx][sy]=1;
        q.push({sx,sy,0,0});
        while(!q.empty()){
            c=q.top();q.pop();
            if(c.x==tx && c.y==ty){
                im=false;
                cout << c.t << " " << c.w << '\n';
                break;
            }
            for(int i=0;i<4;i++){
                if(gx>=0 && gx<n && gy>=0 && gy<m){
                    if(!f[gx][gy] && a[gx][gy]!='#'){
                        f[gx][gy]=1;
                        if(a[gx][gy]=='t') q.push({gx,gy,c.t+1,c.w+1});
                        else q.push({gx,gy,c.t,c.w+1});
                    }
                }
            }
        }
        while(!q.empty())q.pop();
        if(im) cout << "-1\n";
    }
    return 0;
}