#include<bits/stdc++.h>
using namespace std;
long long nonary[10];
long long temp,n,c,a[10],pt;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        c=i%9;
        if(c==0) c=9;
        pt=c;
        for(int i=1;i<10;i++){
            pt+=1;
            if(pt>9) pt=1;
            a[pt]=nonary[i];
        }
        for(int i=1;i<10;i++){
            nonary[i]=(nonary[i]%1000017+a[i]%1000017)%1000017;
        }
        nonary[c]++;
    }
    cout << nonary[9];
    return 0;
}