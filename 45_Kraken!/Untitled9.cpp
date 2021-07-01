#include<bits/stdc++.h>
using namespace std;
int mp[1010][1010],m,n,t,r,mx;
main(){
    cin >> n>> m >> r;
    r-=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> t;
            if(t==1){
                mp[max(i-r,0)][max(j-r,0)]++;
                mp[max(i-r,0)][min(j+r,m-1)+1]--;
                mp[min(i+r,n-1)+1][max(j-r,0)]--;
                mp[min(i+r,n-1)+1][min(j+r,m-1)+1]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            mp[i][j]+=mp[i][j-1];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=1;i<n;i++){
            mp[i][j]+=mp[i-1][j];
        }
    }
    mx=0;
    r--;
    for(int i=r;i<n-r;i++){
        for(int j=r;j<m-r;j++){
            mx=max(mp[i][j],mx);
        }
    }
    cout<<mx;
}
