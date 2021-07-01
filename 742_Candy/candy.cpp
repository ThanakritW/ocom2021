#include<bits/stdc++.h>
using namespace std;
int n,m,q,qn,qx,qy;
string a[2010];
char qd,t;

main(){
    cin >> n >> m >> q;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int k=0;k<q;k++){
        cin >> qx >> qy >> qd >> qn;
        if(qd=='R'){
            t=a[qx][qy];
            for(int i=0;i<qn;i++) a[qx][qy+i]=a[qx][qy+i+1];
            a[qx][qy+qn]=t;
        }
        else if(qd=='L'){
            t=a[qx][qy];
            for(int i=0;i<qn;i++) a[qx][qy-i]=a[qx][qy-i-1];
            a[qx][qy-qn]=t;
        }
        else if(qd=='U'){
            t=a[qx][qy];
            for(int i=0;i<qn;i++) a[qx-i][qy]=a[qx-i-1][qy];
            a[qx-qn][qy]=t;
        }
        else if(qd=='D'){
            t=a[qx][qy];
            for(int i=0;i<qn;i++) a[qx+i][qy]=a[qx+i+1][qy];
            a[qx+qn][qy]=t;
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << '\n';
    }
}
