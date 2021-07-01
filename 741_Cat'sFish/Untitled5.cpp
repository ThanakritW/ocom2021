#include<bits/stdc++.h>
using namespace std;
int l,r,sum=0,n,m,f[10010];
char cmd;
main(){
    cin >> n >> m;
    l=0;
    r=n-1;
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    for(int i=0;i<m;i++){
        cin >> cmd;
        if(cmd=='L')
            sum+=f[l++];
        else
            sum+=f[r--];
    }
    cout << sum;
}
