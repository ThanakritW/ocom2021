#include<bits/stdc++.h>
using namespace std;
main(){
    long n,mx=0,mn=INT_MAX,a[100010];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>mx) mx=a[i];
        if(a[i]<mn) mn=a[i];
    }
    cout << mx-mn;

}
