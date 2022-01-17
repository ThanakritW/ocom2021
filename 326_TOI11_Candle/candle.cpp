#include<bits/stdc++.h>
#define gx dx[k]+c.first
#define gy dy[k]+c.second
using namespace std;
int n,m,cnt=0;
char a[2010][2010];
pair<int,int> c;
queue<pair<int,int>> q;
int dx[8]={1,1,1,0,-1,-1,-1,0},dy[8]={-1,0,1,1,1,0,-1,-1};
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='1'){
                cnt++;
                a[i][j]='0';
                q.push({i,j});
                while(!q.empty()){
                    c=q.front();q.pop();
                    for(int k=0;k<8;k++){
                        if(gx>=0 && gx<n && gy>=0 && gy<m){
                            if(a[gx][gy]=='1'){
                                a[gx][gy]='0';
                                q.push({gx,gy});
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}