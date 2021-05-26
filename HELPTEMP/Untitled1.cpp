#include<bits/stdc++.h>
using namespace std;
bool m[100][100];
int n,x,y;
main(){
    cin >> n;
    for(int i=0;i<n-1;i++){
        cin >> x >> y;
        m[x][y]=1;
    }
    cout << "\t";
    for(int i=0;i<n;i++){
        cout << i << "  ";
    }
    cout << '\n';
    for(int i=0;i<n;i++){
        cout << i << "\t";
        for(int j=0;j<n;j++){
            if(i==j) cout << "x  ";
            else cout << m[i][j] << "  ";
            for(int k=0;k<(j/10);k++) cout << " ";
        }
        cout << '\n';
    }
}
