#include<bits/stdc++.h>
using namespace std;
struct date{
    int y,m,d,vl;
    friend bool operator<(date a,date b){
        if(a.y==b.y){
            if(a.m==b.m){
                if(a.d==b.d){
                    return a.vl<b.vl;
                }
                return a.d<b.d;
            }
            return a.m<b.m;
        }
        return a.y<b.y;
    }
};
int n,ta,tb,tc,td,te,tf,total=0,ansy,ansm,ansd;
vector<date> v;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d-%d-%d %d-%d-%d",&ta,&tb,&tc,&td,&te,&tf);
        v.push_back({ta,tb,tc,1});
        v.push_back({td,te,tf,-1});
    }
    int mx=0;
    sort(v.begin(),v.end());
    for(auto e:v){
        total+=e.vl;
        if(total>mx){
            mx=total;
            ansy=e.y;
            ansm=e.m;
            ansd=e.d;
        }
    }
    printf("%04d-%02d-%02d",ansy,ansm,ansd);

    return 0;
}