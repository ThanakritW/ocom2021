#include<bits/stdc++.h>
using namespace std;
int n,e,s,t,ta,tb,tc;
long long d[1000][1000];
int path[1000][1000];
stack<int> stk;
main(){
    cin >> n >> e >> s >> t;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)d[i][j]=0;
            else d[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<e;i++){
        cin >> ta >> tb >> tc;
        d[ta][tb]=tc;
        d[tb][ta]=tc;
        path[ta][tb]=ta;
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                if(d[i][j]>d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                    path[i][j]=k;
                }
            }
        }
    }
    cout << d[s][t];
    stk.push(t);
    do{
        stk.push(path[s][t]);
        t=path[s][t];
    }while(path[s][t]!=s);
    cout << '\n' << s;
    while(!stk.empty()){
        cout << "->" << stk.top();
        stk.pop();
    }
}
