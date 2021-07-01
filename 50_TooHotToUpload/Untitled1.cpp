#include<bits/stdc++.h>
using namespace std;
struct node{
    long long x,y,w;
    bool friend operator<(node a,node b){
        return a.w > b.w;
    }
};
bool f[1010][1010];
node c;
long long m[1010][1010],n,tx,ty,s=0;
priority_queue<node> q;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> m[i][j];
            if(m[i][j]==0){
                if(s==0){
                    q.push({i,j,0});
                    s++;
                }
                else{
                    tx=i;
                    ty=j;
                }
            }
        }
    }
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.x==tx && c.y==ty){
            cout << c.w;
            return 0;
        }
        if(f[c.x][c.y]) continue;
        else{
            f[c.x][c.y]=1;
            for(int i=-1;i<2;i+=2){
                if(c.x+i>=0 && c.x+i<n) q.push({c.x+i,c.y,max(c.w,m[c.x+i][c.y])});
                if(c.y+i>=0 && c.y+i<n) q.push({c.x,c.y+i,max(c.w,m[c.x][c.y+i])});
            }
        }
    }

}

