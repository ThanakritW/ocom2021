#include<bits/stdc++.h>
using namespace std;
int main(){
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++)
        cin >> lift[i];
    for(int i=1;i<=n;i++)
        cin >> staff[i];
    for(int i=1;i<=m;i++){
        cin >> qs[i];
        qs[i]+=qs[i-1];
    }
    for(int i=1;i<=q;i++)
        cin >> t[i];
    for(int k=1;k<=q;k++){
        for(int i=1;i<=n;i++)
            cin >> p[i];
    }

    return 0;
}