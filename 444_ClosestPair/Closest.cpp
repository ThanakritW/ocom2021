#include<bits/stdc++.h>
using namespace std;
struct p{
    double x,y;
};
int q,n;
double ta,tb,ans;
vector<p> v;
double dist(p a, p b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
bool cmpx(p a,p b){
    return a.x<b.x;
}
bool cmpy(p a,p b){
    return a.y<b.y;
}
double cp(int l,int r){
    if(l>=r) return DBL_MAX;
    if(r-l<=2){
        double mn=DBL_MAX;
        for(int i=l;i<=r;i++){
            for(int j=i+1;j<=r;j++){
                mn=min(mn,dist(v[i],v[j]));
            }
        }
        return mn;
    }
    int m=r/2;
    double d=min(cp(l,m),cp(m+1,r));
    vector<p> stp;
    for(int i=l;i<=r;i++)
        if(abs(v[i].x-v[m].x)<d)
            stp.push_back(v[i]);
    sort(stp.begin(),stp.end(),cmpy);
    for(int i=0;i<stp.size();i++){
        for(int j=i+1;j<stp.size();j++){
            if(stp[j].y-stp[i].y>=d) break;
            d=min(d,dist(stp[i],stp[j]));
        }
    }
    return d;
}
int main(){
    scanf("%d",&q);
    for(int k=0;k<q;k++){
        scanf("%d",&n);+
        for(int i=0;i<n;i++){
            scanf("%lf %lf",&ta,&tb);
            v.push_back({ta,tb});
        }
        sort(v.begin(),v.end(),cmpx);
        ans=cp(0,n-1);
        if(ans>10000) printf("No answer\n");
        else printf("%.1lf\n",ans); 
        v.clear();
    }
    return 0;
}