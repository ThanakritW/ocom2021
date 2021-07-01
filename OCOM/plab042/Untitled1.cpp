#include<bits/stdc++.h>
using namespace std;
int n,m,s,t,ta,tb,tc;
long long d[10010][10010];
main(){
    cin >> n >> m >> s >> t;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        d[i][j]=INT_MAX;
    }
    for(int i=0;i<n;i++){
        d[i][i]=0;
    }
    for(int i=0;i<m;i++){
        cin >> ta >> tb >> tc;
        d[ta][tb]=tc;
        d[tb][ta]=tc;
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                if(d[i][j]>d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
    cout << d[s][t] << '\n' << d[s][t]*20;
}
