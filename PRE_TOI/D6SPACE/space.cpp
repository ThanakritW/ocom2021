#include<iostream>
#include<queue>
#define x first
#define y second
#define pii pair<int,int>
using namespace std;
int n,m,a[1010][1010],zr,tzr,sq,tr,rb;
queue<pii> q;
pii c;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char t;
int main(){
    cin >> m >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> t;
            a[i][j]=(t-'0');
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1){
                q.push({i,j});
                tzr=0;
                a[i][j]=2;
                while(!q.empty()){
                    c=q.front();
                    q.pop();
                    zr=0;
                    for(int i=0;i<4;i++){
                        if(a[c.x+dx[i]][c.y+dy[i]]==1){
                            a[c.x+dx[i]][c.y+dy[i]]=2;
                            q.push({c.x+dx[i],c.y+dy[i]});
                        }
                        else if(a[c.x+dx[i]][c.y+dy[i]]==0) zr++;
                    }
                    if(zr==3) tzr++;
                }
                if(tzr==0) sq++;
                else if(tzr==3) tr++;
                else if(tzr==4) rb++;
            }
        }
    }
    cout << sq << " " << rb << " " << tr;
    return 0;
}

