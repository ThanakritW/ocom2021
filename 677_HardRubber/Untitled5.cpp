#include<bits/stdc++.h>
using namespace std;
struct node{
    long long x,y,w;
    bool friend operator< (node a,node b){
        return a.w<b.w;
    }
};
priority_queue<node> q;
node c;
long long n,m,a[10][10],dp[10][10],mx=0;
bool flag[10][10];
char ch;
int f[10][10];
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> ch;
            if(ch=='S') a[i][j]=0;
            else if(ch=='*') a[i][j]=1;
            else if(ch=='X') a[i][j]=-1;
            else if(ch=='E') a[i][j]=0;
        }
    }
    q.push({0,0,3});
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(c.w<1 || f[c.x][c.y]>c.w) continue;
        cout << c.x <<" "<< c.y <<" "<< c.w << '\n';
        if(c.x==n-1 && c.y==m-1){
            mx=max(mx,c.w);
        }
        else{
            f[c.x][c.y]=c.w;
            if(c.x-1>=0) q.push({c.x-1,c.y,c.w+a[c.x-1][c.y]});
            if(c.y-1>=0) q.push({c.x,c.y-1,c.w+a[c.x][c.y-1]});
            if(c.x+1<n) q.push({c.x+1,c.y,c.w+a[c.x+1][c.y]});
            if(c.y+1<m) q.push({c.x,c.y+1,c.w+a[c.x][c.y+1]});
        }
    }
    cout << mx;
    return 0;
}
