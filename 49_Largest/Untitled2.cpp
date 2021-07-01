#include<bits/stdc++.h>
using namespace std;
long long q,n,m,a[1010][1010],cnt,c,mxw,mxx,mxy;
main(){
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
            }
        }
        mxw=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]>a[i+1][j]){
                    cnt=1;
                    c=j;
                    while(a[i][c]>=a[i][c+1] && c<m){
                        cnt++;
                        c++;
                    }
//                    cout <<"Right"<< cnt << '\n';
                    c=j;
                    while(a[i][c]>=a[i][c-1] && c>1){
                        cnt++;
                        c--;
                    }
//                    cout <<"Left"<< cnt << '\n';
                    c=i;
                    while(a[c][j]>=a[c+1][j] && c<n){
                        cnt++;
                        c++;
                    }
                    c=i;
//                    cout <<"Down"<< cnt << '\n';
                    while(a[c][j]>=a[c-1][j] && c>1){
                        cnt++;
                        c--;
                    }
//                    cout <<"Up"<< cnt << '\n';
                    if(cnt>mxw){
                        mxw=cnt;
                        mxx=i;
                        mxy=j;
                    }
                }
            }
        }
        cout << mxw << '\n' << mxx << " " << mxy << '\n';
    }
}

