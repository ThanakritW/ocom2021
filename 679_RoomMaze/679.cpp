#include<bits/stdc++.h>
using namespace std;
struct maze{
    int x,y,w;
};
int n,m,sx,sy,tx,ty;
int s[1010][1010];
int dy[4]={0,1,0,-1},dx[4]={-1,0,1,0};
char t;
queue<maze> q;
bool f[1010][1010];
maze c;
bool dir[16][4]={
    {0,0,0,0},
    {1,0,0,0},
    {0,1,0,0},
    {0,0,1,0},
    {0,0,0,1},
    {1,1,0,0},
    {1,0,1,0},
    {1,0,0,1},
    {0,1,1,0},
    {0,1,0,1},
    {0,0,1,1},
    {0,1,1,1},
    {1,0,1,1},
    {1,1,0,1},
    {1,1,1,0},
    {1,1,1,1}};
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> t;
            if(t>='A') t=t-'A'+10;
            else t-='0';
            s[i][j]=t;
        }
    }
    cin >> sx >> sy;
    cin >> tx >> ty;
    f[sx][sy]=1;
    q.push({sx,sy,0});
    while(!q.empty()){
        c=q.front();
        q.pop();
        if(c.x==tx && c.y==ty){
            cout << c.w;
            return 0;
        }
        for(int i=0;i<4;i++){
            if(dir[s[c.x][c.y]][i]){
                if(!f[c.x+dx[i]][c.y+dy[i]]){
                    f[c.x+dx[i]][c.y+dy[i]]=1;
                    q.push({c.x+dx[i],c.y+dy[i],c.w+1});
                }
            }
        }
    }
    return 0;
}