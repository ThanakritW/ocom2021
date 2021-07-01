#include<bits/stdc++.h>
using namespace std;
bool m[100][100];
int n;
void printpath(queue<int> path){
    cout << endl;
    while(!path.empty()){
        cout << path.front() << "->";
        path.pop();
    }
    cout << endl;
}
void findpath(int x,int tg,queue<int> path,bool f[]){
    path.push(x);
    if(x==tg){
        printpath(path);
    }
    f[x]=1;
    for(int i=0;i<n;i++){
        if(m[x][i]==1 && f[i]==0){
//            cout << i << " ";
            findpath(i,tg,path,f);
        }
    }
    f[x]=0;
}
int e,s,t,tx,ty;
queue<int> p;
bool fl[100];
main(){
    cin >> n >> e >> s >>t;
    for(int i=0;i<e;i++){
        cin >> tx >> ty;
        m[tx][ty]=1;
        m[ty][tx]=1;
    }
    findpath(s,t,p,fl);
}
