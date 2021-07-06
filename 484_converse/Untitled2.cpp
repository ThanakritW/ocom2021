#include<bits/stdc++.h>
using namespace std;
int q,a[12],b[12],tl,tr,n,t,ans,l,r;
bool f;
int main(){
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> n;
        for(int i=1;i<=5;i++){
            a[i]=0;
            b[i]=0;
        }
        for(int i=0;i<n;i++){
            cin >> t;
            a[t]++;
        }
        for(int i=0;i<n;i++){
            cin >> t;
            b[t]++;
        }
        f=1;
        for(int i=1;i<=5;i++){
            if((a[i]+b[i])%2==1){
                cout << -1 << '\n';
                f=0;
                break;
            }
        }
        if(f){
            ans=0;
            l=1;
            while(l<=5){
                while(a[l]==b[l] && l<6){
                    l++;
                }
                if(l>5) break;
                r=l;
                if(a[l]>b[l]){
                    while(b[r]<=a[r]){
                        r++;
                    }
                    tl=(a[l]-b[l])/2;
                    tr=(b[r]-a[r])/2;
                    if(tr<tl){
                        a[l]-=tr;
                        b[l]+=tr;
                        a[r]+=tr;
                        b[r]-=tr;
                        ans+=tr;
                    }
                    else{
                        a[l]-=tl;
                        b[l]+=tl;
                        a[r]+=tl;
                        b[r]-=tl;
                        ans+=tl;
                    }
                }
                else{
                    while(a[r]<=b[r]){
                        r++;
                    }
                    tl=(b[l]-a[l])/2;
                    tr=(a[r]-b[r])/2;
                    if(tl<tr){
                        b[l]-=tl;
                        a[l]+=tl;
                        b[r]+=tl;
                        a[r]-=tl;
                        ans+=tl;
                    }
                    else{
                        b[l]-=tr;
                        a[l]+=tr;
                        b[r]+=tr;
                        a[r]-=tr;
                        ans+=tr;
                    }
                }
            }
        cout << ans << '\n';
        }
    }
    return 0;
}

