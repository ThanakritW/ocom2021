#include<bits/stdc++.h>
using namespace std;
char x,y,ans;
long long z,w[55][55],e,mn=INT_MAX;
bool f[55];
int main(){
    for(int i=0;i<52;i++){
        for(int j=0;j<52;j++){
            if(i!=j) w[i][j]=INT_MAX;
            else w[i][j]=0;
        }   
    }
    cin >> e;
    for(int i=0;i<e;i++){
        cin >> x >> y >> z;
        if(x<'a') f[x-'A']=1;
        else x-=6;
        if(y<'a') f[y-'A']=1;
        else y-=6;
        w[x-'A'][y-'A']=z;
        w[y-'A'][x-'A']=z;  
    }
    for(int k=0;k<52;k++){
        for(int i=0;i<52;i++){
            for(int j=0;j<52;j++){
                if(w[i][j]>w[i][k]+w[k][j])
                    w[i][j]=w[i][k]+w[k][j];
            }
        }
    }
    for(int i=0;i<52;i++){
        if(w[i][25]<mn && f[i] && i!=25){
            mn=w[i][25];
            ans='A'+i;
        }
    }
    cout << ans << " " << mn;
    return 0;
}