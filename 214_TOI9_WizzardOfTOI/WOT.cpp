#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y,i,j;
    bool friend operator<(node a,node b){
        if(a.x==b.x) return a.y<b.y;
        return a.x<b.x;
    }
};
vector<node> v;
int x[1510][5],y[1510][5],tx,ty,n,dx,dy;
int main(){
    scanf("%d %d %d",&tx,&ty,&n);
    for(int i=0;i<n;i++) scanf("%d %d",&x[i][0],&y[i][0]);
    for(int i=0;i<n;i++) scanf("%d %d",&x[i][1],&y[i][1]);
    for(int i=0;i<n;i++) scanf("%d %d",&x[i][2],&y[i][2]);
    for(int i=0;i<n;i++) scanf("%d %d",&x[i][3],&y[i][3]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v.push_back({x[i][0]+x[j][1],y[i][0]+y[j][1],i,j});
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dx=tx-x[i][2]-x[j][3];
            dy=ty-y[i][2]-y[j][3];
            auto it=lower_bound(v.begin(),v.end(),(node){dx,dy,0,0});
            if(it->x==dx && it->y==dy){
                printf("%d %d\n%d %d\n%d %d\n%d %d",x[it->i][0],y[it->i][0],x[it->j][1],y[it->j][1],x[i][2],y[i][2],x[j][3],y[j][3]);
                return 0;
            }
        }
    }
    return 0;
}