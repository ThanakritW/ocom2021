#include<bits/stdc++.h>
using namespace std;
int n,e,s,t,ta,tb,tc;
long long w[1000][1000];
main(){
    cin >> n >> e >> s >> t;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                w[i][j]=0;
            else
                w[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<e;i++){
        cin >> ta >> tb >> tc;
        w[ta][tb]=tc;
        w[tb][ta]=tc;
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                if(w[i][j]>w[i][k]+w[k][j]){
                    w[i][j]=w[i][k]+w[k][j];
                }
            }
        }
    }
    cout << w[s][t];
}
