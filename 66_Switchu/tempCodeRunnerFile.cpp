#include<bits/stdc++.h>
using namespace std;
int n,a[100100];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int mx=n;
    int ls=0;
    for(int i=0;i<mx;i++){
        if(a[i]==a[i-1])continue;
        for(int j=n-1;j>mx-i;j--){
            if(a[i]*2>=a[j]){
                mx=min(mx,i+n-1-j);
                ls=j;
                break;
            }
        }
    }
    cout << mx;
}