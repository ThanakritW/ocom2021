#include<bits/stdc++.h>
using namespace std;
int n,t,mn=INT_MAX,mx=INT_MIN;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t<mn) mn=t;
        if(t>mx) mx=t;
    }
    cout << mn << '\n' << mx;
    return 0;
}