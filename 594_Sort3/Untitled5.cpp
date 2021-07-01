#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[50010];
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout <<a[i]<< '\n';
    }
}
