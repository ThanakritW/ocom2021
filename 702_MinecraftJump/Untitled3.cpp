#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> m;
int n,tx,ty,tz,cnt;
main(){
    cin >> tx >> ty >> n;
    cin >> tx >> ty >> tz;
    for(int i=0;i<tz;i++){
        m[{tx-tz+i,ty+i}]=1;
    }
    for(int i=0;i<tz;i++){
        m[{tx+i,ty+tz-i}]=1;
    }
    for(int i=0;i<tz;i++){
        m[{tx+tz-i,ty-i}]=1;
    }
    for(int i=0;i<tz;i++){
        m[{tx-i,ty-tz+i}]=1;
    }
    cin >> tx >> ty >> tz;
    cnt=0;
    for(int i=0;i<tz;i++){
        if(cnt==2) break;
        if(m[{tx-tz+i,ty+i}]){
            m[{tx-tz+i,ty+i}]++;
            cnt++;
        }
    }
    for(int i=0;i<tz;i++){
        if(cnt==2) break;
        if(m[{tx+i,ty+tz-i}]){
            m[{tx+i,ty+tz-i}]++;
            cnt++;
        }
    }
    for(int i=0;i<tz;i++){
        if(cnt==2) break;
        if(m[{tx+tz-i,ty-i}]){
            m[{tx+tz-i,ty-i}]++;
            cnt++;
        }
    }
    for(int i=0;i<tz;i++){
        if(cnt==2) break;
        if(m[{tx-i,ty-tz+i}]){
            m[{tx-i,ty-tz+i}]++;
            cnt++;
        }
    }
    cin >> tx >> ty >> tz;
    cnt=0;
    for(int i=0;i<tz;i++){
        if(cnt==1) break;
        if(m[{tx-tz+i,ty+i}]){
            cout << tx-tz+i << " " << ty+i;
            cnt++;
        }
    }
    for(int i=0;i<tz;i++){
        if(cnt==1) break;
        if(m[{tx+i,ty+tz-i}]){
            cout << tx+i << " " << ty+tz-i;
            cnt++;
        }
    }
    for(int i=0;i<tz;i++){
        if(cnt==1) break;
        if(m[{tx+tz-i,ty-i}]){
            cout << tx+tz-i << " " << ty-i;
            cnt++;
        }
    }
    for(int i=0;i<tz;i++){
        if(cnt==1) break;
        if(m[{tx-i,ty-tz+i}]){
            cout << tx-i << " " << ty-tz+i;
            cnt++;
        }
    }
    for(int i=0;i<n-3;i++){
        cin >> tx >> ty >> tz;
    }
};
