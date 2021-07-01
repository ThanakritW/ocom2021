#include<bits/stdc++.h>
using namespace std;
int n,m,a[1010];
main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(m==1) sort(a,a+n,greater<int>());
    else sort(a,a+n);
    for(int i=0;i<n;i++){
        cout <<a[i]<< " ";
    }
}
