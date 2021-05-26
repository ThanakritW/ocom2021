#include<bits/stdc++.h>
using namespace std;
long n,sc[10010],mn=LONG_MAX,mx=0,nmx=0,nmn=0;
string num[10010];
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num[i] >> sc[i];
        if(sc[i]>mx) mx=sc[i];
        if(sc[i]<mn) mn=sc[i];
    }
    for(int i=0;i<n;i++){
        if(sc[i]==mx) nmx++;
        if(sc[i]==mn) nmn++;
    }
    cout << mx << " " << nmx << endl;
    for(int i=0;i<n;i++){
        if(sc[i]==mx) cout << num[i] << endl;
    }
    cout << mn << " " << nmn << endl;
    for(int i=0;i<n;i++){
        if(sc[i]==mn) cout << num[i] << endl;
    }
}
