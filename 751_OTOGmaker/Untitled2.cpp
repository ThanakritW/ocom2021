#include<bits/stdc++.h>
using namespace std;
char a[1010];
int o=0,t=0,g=0;
main(){
    cin >> a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='O') o++;
        else if(a[i]=='T') t++;
        else if(a[i]=='G') g++;
    }
    cout << min(o/2,min(t,g));
}
