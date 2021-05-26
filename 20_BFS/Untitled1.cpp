#include<bits/stdc++.h>
using namespace std;
struct pos{
    int x,y,w;
};
int n,m,qx,qy,breaker=INT_MAX;
char mp[55][55];
bool f[55][55];
vector<char> ans;
queue<pos> q;
main(){
    cin >> n >> m;
    cin >> qx >> qy;
    for(int j=0;j<m;j++){
        cin >> mp[j];
    }
    q.push({qy,qx,0});
    while(!q.empty()){
        pos c=q.front();
        q.pop();
        if(breaker<c.w) break;
        if(mp[c.x][c.y]>='A'&&mp[c.x][c.y]<='Z'){
            breaker=c.w;
            ans.push_back(mp[c.x][c.y]);
            mp[c.x][c.y]='1';
            continue;
        }
        if(mp[c.x][c.y+1]!='1' && f[c.x][c.y+1]==0){
            f[c.x][c.y+1]=1;
            q.push({c.x,c.y+1,c.w+1});
        }
        if(mp[c.x+1][c.y]!='1' && f[c.x+1][c.y]==0){
            f[c.x+1][c.y]=1;
            q.push({c.x+1,c.y,c.w+1});
        }
        if(mp[c.x-1][c.y]!='1' && f[c.x-1][c.y]==0){
            f[c.x-1][c.y]=1;
            q.push({c.x-1,c.y,c.w+1});
        }
        if(mp[c.x][c.y-1]!='1' && f[c.x][c.y-1]==0){
            f[c.x][c.y-1]=1;
            q.push({c.x,c.y-1,c.w+1});
        }
    }
    sort(ans.begin(),ans.end());
    for(auto e:ans){
        cout << e << '\n';
    }
}
