#include<bits/stdc++.h>
using namespace std;
long long n,k,km,a[1010],mn;
bool f[1010];
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
        f[i]=1;
    }
    for(int i=0;i<n;i++){
        mn=a[i];
        km=0;
        for(int j=0;j<=k;j++){
            if(mn>a[i+j]){
                mn=a[i+j];
                km=j;
            }
        }
        for(int j=0;j<km;j++){
            f[i+j]=0;
        }
        i+=km;
        k-=km;
        if(k==0) break;
    }
    for(int i=0;i<n;i++){
        if(f[i]){
            cout << a[i] << " ";
        }
    }
    return 0;
}
