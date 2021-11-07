#include<bits/stdc++.h>
using namespace std;
int n,m,k,tx,ty,p[40010],px,py,mp[410][410],lv[40010],v[40010][5],sx=500,sy=500;
char c;
bool f[40010];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
void construct(int s,int x,int y){
    mp[x][y]=s;
    f[s]=true;
    //cout << s << '\n';
    if(x<sx) sx=x;
    if(y<sy) sy=y;
    for(int i=0;i<4;i++){
        if(!f[v[s][i]]){
            construct(v[s][i],x+dx[i],y+dy[i]);
        }
    }
}
int main(){
    cin >> n >> m;
    k=n*m;
    for(int i=0;i<k;i++){
        p[i]=i;
        f[i]=false;
    }
    for(int i=0;i<k-1;i++){
        cin >> tx >> c >> ty;
        if(c=='U'){
            v[tx][2]=ty;
            v[ty][0]=tx;

        }
        else{
            v[tx][1]=ty;
            v[ty][3]=tx;
        }
    }
    construct(0,205,205);
    for(int i=sx;i<sx+n;i++){
        for(int j=sy;j<sy+m;j++){
            cout << mp[i][j];
        }
        cout << '\n';
    }
}
