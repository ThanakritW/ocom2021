#include<bits/stdc++.h>
using namespace std;
int n,m,a[10][10];
bool f[10][10];
char t;
int botan(int x,int y,int h){
    if(x>=n || y>=m || x<0 || y<0 || h<1) return -99;
    if(x==n-1 && y==m-1) return h;
    else{
        f[x][y]=1;
        int mx=-99;
        for(int i=-1;i<2;i+=2){
            if(!f[x+i][y])
                mx=max(mx,botan(x+i,y,h+a[x+i][y]));
            if(!f[x][y+i])
                mx=max(mx,botan(x,y+i,h+a[x][y+i]));
        }
        f[x][y]=0;
        return mx;
    }
}
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin >> t;
        if(t=='S' || t=='E') a[i][j]=0;
        if(t=='*') a[i][j]=1;
        if(t=='X') a[i][j]=-1;
        }
    }
    cout << botan(0,0,3);
}