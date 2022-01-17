#include<bits/stdc++.h>
using namespace std;
int n,t;
int v[100100];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int mx=n;
    sort(v,v+n);
    for(int i=0;i<mx;i++){
        for(int j=n-1;n-1-j<mx-i;j--){
            if(v[i]*2>=v[j]){
                mx=i+n-1-j;
                break;
            }
        }
    }
    cout << mx;
    return 0;
}