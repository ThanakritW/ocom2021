#include<bits/stdc++.h>
using namespace std;
long long n,a[2000100],l=0,ans=0,u=0,t,m,ex,cnt;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(long long i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>u){
            u=a[i];
        }
    }
    while(l<u){
        m=(l+u)/2;
        ex=0;
        for(long long i=0;i<n;i++){
            if(ex) break;
            else if(a[i]<=m){
                continue;
            }
            else if(a[i]==a[i+1]){
                i++;
                continue;
            }
            else{
                if(cnt){
                    if(a[i]==t){
                        cnt=0;
                    }
                    else{
                        ex=1;
                        break;
                    }
                }else{
                    cnt=1;
                    t=a[i];
                }
                i++;
            }
        }
        if(ex)
            l=m+1;
        else
            u=m;
    }
    cout << l;
    return 0;
}