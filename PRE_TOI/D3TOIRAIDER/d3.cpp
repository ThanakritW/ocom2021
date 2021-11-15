#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,w;
};
node c;
queue<node> q;
int oy[6]={0,1,1,1,0,-1},ox[6]={-1,-1,0,1,1,0};
int ey[6]={0,1,0,-1,-1,-1},ex[6]={-1,0,1,1,0,-1};
int n,m,a[110][110];
bool f[110][110][2000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    q.push({(m/2),1,1});
    q.push({(m/2)+1,1,1});
    q.push({(m/2)+2,1,1});
    while(!q.empty()){
        c=q.front();
        q.pop();
        if(a[c.x][c.y]==0) continue;
        if(c.x==(m/2)+1 && c.y==n){
            cout << c.w;
            return 0;
        }
        if(c.x%2==0){
            for(int i=0;i<6;i++){
                if(a[c.x+ex[i]][c.y+ey[i]]){
                    if((c.w+1)%(a[c.x+ex[i]][c.y+ey[i]])==0 && !f[c.x+ex[i]][c.y+ey[i]][(c.w+1)/a[c.x+ex[i]][c.y+ey[i]]]){
                        f[c.x+ex[i]][c.y+ey[i]][(c.w+1)/a[c.x+ex[i]][c.y+ey[i]]]=1;
                        q.push({c.x+ex[i],c.y+ey[i],c.w+1});
                    }
                }
            }
        }
        else{
            for(int i=0;i<6;i++){
                if(a[c.x+ox[i]][c.y+oy[i]]){
                    if((c.w+1)%(a[c.x+ox[i]][c.y+oy[i]])==0 && !f[c.x+ox[i]][c.y+oy[i]][(c.w+1)/a[c.x+ox[i]][c.y+oy[i]]]){
                        f[c.x+ox[i]][c.y+oy[i]][(c.w+1)/a[c.x+ox[i]][c.y+oy[i]]]=1;
                        q.push({c.x+ox[i],c.y+oy[i],c.w+1});
                    }
                }
            }
        }
    }
    return 0;
}