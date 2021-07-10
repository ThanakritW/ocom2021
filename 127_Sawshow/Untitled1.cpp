#include<bits/stdc++.h>
using namespace std;
long long n,k,mx,ta,tb,tc,a[1000100],id,cmd;
int main(){
    cin >> n >> k;
    mx=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]>=mx){
            mx=a[i];
            id=i;
        }
    }
    for(int i=1;i<=k;i++){
        cin >> cmd;
        if(cmd==3){
            if(a[id]-i>0)
                cout << id << " " << a[id]-i << '\n';
            else
                cout << -1 << '\n';
        }
        else if(cmd==2){
            cin >> ta >> tb;
            if(a[ta]-i>0){
                a[ta]+=tb;
            }
            if(a[ta]>mx){
                id=ta;
                mx=a[ta];
            }
            else if(a[ta]==mx && ta>id){
                id=ta;
            }
        }
        else{
            cin >> ta >> tb >> tc;
            if(!(a[tb]-i<1 || ta>n || tb>n || a[ta]-i<1)){
                tc=max((long long)0,min(tc,a[tb]-i));
                a[ta]+=tc;
                if(a[ta]>mx){
                    id=ta;
                    mx=a[ta];
                }
                else if(a[ta]==mx && ta>id){
                    id=ta;
                }
            }
        }
    }
    return 0;
}
