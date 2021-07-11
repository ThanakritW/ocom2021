#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,w;

};
char mp[1010][1010];
bool f[1010][1010];
int n,m,sx,sy,tx,ty;
int cmx[10]={1,1,-1,-1,2,2,-2,-2};
int cmy[10]={2,-2,2,-2,1,-1,1,-1};
queue<node> q;
main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin >> mp[i][j];
    cin >> sx >> sy >> tx >> ty;
    q.push({sx,sy,0});
    while(!q.empty()){
        node c=q.front();
        q.pop();
        if(c.x==tx && c.y==ty){
            cout << c.w;
            return 0;
        }
        for(int i=0;i<8;i++){
            if(c.x+cmx[i]<=n && c.x+cmx[i]>0 && c.y+cmy[i]<=m && c.y+cmy[i]>0 && mp[c.x+cmx[i]][c.y+cmy[i]]=='.' && !f[c.x+cmx[i]][c.y+cmy[i]]){
                q.push({c.x+cmx[i],c.y+cmy[i],c.w+1});
                f[c.x+cmx[i]][c.y+cmy[i]]=1;
            }
        }
    }
    cout << "-1";
    return 0;
}