#include<bits/stdc++.h>
using namespace std;
char a[10010][100];
char q[100];
int n,ans=0,k,chk;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<strlen(a[i]);j++){
            if(a[i][j]==q[0]){
                k=1;
                chk=1;
                while(k<strlen(q)){
                    if(q[k]!=a[i][j+k]){
                        chk=0;
                        break;
                    }
                    k++;
                }
                if(chk==1) ans++;
            }
        }
    }
    cout << ans;
}
