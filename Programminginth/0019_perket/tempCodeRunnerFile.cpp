#include<bits/stdc++.h>
using namespace std;
int a[15],b[15],k;
int mix(int x,int y,int n){
    if(n==k){
        if(x==1 && y==0) return INT_MAX;
        return abs(x-y);
    }
    return min(mix(x*a[n],y+b[n],n+1),mix(x,y,n+1));
}
int main(){
    cin >> k ;
    for(int i=0;i<k;i++){
        cin >> a[i] >> b[i];
    }
    cout << mix(1,0,0);
}