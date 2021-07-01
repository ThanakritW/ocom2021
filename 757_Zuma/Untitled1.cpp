#include<bits/stdc++.h>
using namespace std;
int n,m,v,ansl,ansr,l,r,cnt,a[1100000];
int main(){
    cin >> n >> m >> v;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ansl=m;
    ansr=m;
    l=m-1;
    r=m;
    cnt=1;
    while(1){
        if(a[l]==v){
            do{
                cnt++;
                l--;
            }while(a[l]==v);
        }
        if(a[r]==v){
            do{
                cnt++;
                r++;
            }while(a[r]==v);
        }
        if(cnt>=3){
            ansl=l+1;
            ansr=r;
            if(a[l]!=a[r]) break;
            else v=a[l];
            cnt=0;
        }
        else break;
    }
    if(ansr-ansl<n){
        for(int i=0;i<n;i++){
            if(i==ansl){
                if(ansl==ansr) cout << v << " ";
                else i=ansr;
            }
            cout << a[i] << " ";
        }
    }
}
