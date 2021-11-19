#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define x first
#define y second
struct node{
    int x,y,w;
};
node c;
vector<pii> v;
queue<node> q;
bool f[2020][2020];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n,m,a[2020][2020],tfound,tdis;
char t;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> t;
            if(t=='E') a[i][j]=1;
            else if(t=='X'){
                a[i][j]=1;
                v.push_back({i,j});
            }
            else if(t=='A') a[i][j]=2;
            else a[i][j]=0;
        }
    }
    for(int i=0;i<v.size();i++){
        q.push({v[i].x,v[i].y,0});
    }
    while(!q.empty()){
        c=q.front();
        q.pop();
        if(a[c.x][c.y]==2){
            tdis+=c.w*2;    
            tfound++;
        }
        for(int i=0;i<4;i++){
            if(a[c.x+dx[i]][c.y+dy[i]] && !f[c.x+dx[i]][c.y+dy[i]]){
                f[c.x+dx[i]][c.y+dy[i]]=1;
                q.push({c.x+dx[i],c.y+dy[i],c.w+1});
            }
        }
    }
    cout << tfound << " " << tdis;
    return 0;
}