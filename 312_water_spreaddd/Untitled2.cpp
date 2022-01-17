#include<bits/stdc++.h>
#define xi dx[i]
#define yi dy[i]
using namespace std;
struct node{
    int x,y,w;
};
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1},n,m,tx,ty,ans[1000100],f[1010][1010],nq,sm[1000100],qe[1000100],mx;

queue<node> q;
node c;
int qs(int x){
    if(x==0) return 1;
    if(sm[x]) return sm[x];
    else return sm[x]=ans[x]+qs(x-1);
}
int main(){
    cin >> n >> m >> nq;
    for(int i=0;i<m;i++){
        cin >> tx >> ty;
        f[tx][ty]=1;
    }
    cin >> tx >> ty;
    f[tx][ty]=1;
    sm[0]=1;
    q.push({tx,ty,0});
    while(!q.empty()){
        c=q.front();q.pop();
        for(int i=0;i<4;i++){
            if(!f[c.x+xi][c.y+yi] && c.x+xi>0 && c.x+xi<=n && c.y+yi>0 && c.y+yi<=n){
                f[c.x+xi][c.y+yi]=1;
                ans[c.w+1]++;
                q.push({c.x+xi,c.y+yi,c.w+1});
            }
        }
    }
    for(int i=0;i<nq;i++){
        cin >> qe[i];
        mx=max(mx,qe[i]);
    }
    for(int i=1;i<=mx;i++){
        sm[i]=ans[i]+sm[i-1];
    }
    for(int i=0;i<nq;i++){
        cout << sm[qe[i]] << '\n';
    }
    return 0;
}
