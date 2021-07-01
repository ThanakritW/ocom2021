#include<bits/stdc++.h>
using namespace std;
int m[100][100];
int n,mw=INT_MAX;
queue<int> ans;
void printpath(queue<int> path, int w){
    cout << path.front();
    path.pop();
    int cnt=path.size();
    while(!path.empty()){
        cout << "->"<< path.front();
        path.pop();
    }
    cout << '\n' << cnt << '\n' << w;
}
void copypath(queue<int> q){
    while(!ans.empty()){
        ans.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
}
void findpath(int x,int tg,queue<int> path,bool f[],int w){
    path.push(x);
    if(x==tg){
        if(w<mw){
            mw=w;
            copypath(path);
        }
    }
    f[x]=1;
    for(int i=0;i<n;i++){
        if(m[x][i]>0 && f[i]==0){
            findpath(i,tg,path,f,w+m[x][i]);
        }
    }
    f[x]=0;
}
int e,s,t,tx,ty,tw;
queue<int> p;
bool fl[100];
main(){
    cin >> n >> e >> s >>t;
    for(int i=0;i<e;i++){
        cin >> tx >> ty >> tw;
        m[tx][ty]=tw;
        m[ty][tx]=tw;
    }
    findpath(s,t,p,fl,0);
    printpath(ans,mw);
}
