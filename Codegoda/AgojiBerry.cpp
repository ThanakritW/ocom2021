#include<bits/stdc++.h>
using namespace std;
int dpr[510][510],dpg[510][510],a[510],q,n;
int green(int l,int r);
int red(int l,int r){
    if(l==r) return a[r];
    if(dpr[l][r]) return dpr[l][r];
    return dpr[l][r]=max(green(l+1,r)+a[l],green(l,r-1)+a[r]);
}
int green(int l,int r){
    if(l==r) return -a[r];
    if(dpg[l][r]) return dpg[l][r];
    return dpg[l][r]=min(red(l+1,r)-a[l],red(l,r-1)-a[r]);
}
int greenx(int l,int r);
int redx(int l,int r){
    if(l==r) return a[r];
    if(l>r) return 0;
    if(dpr[l][r]) return dpr[l][r];
    int c;
    if(a[l]==a[r]) c=greenx(l+1,r-1)+a[l]+a[r];
    else c=INT_MIN;
    return dpr[l][r]=max({c,greenx(l+1,r)+a[l],greenx(l,r-1)+a[r]});
}
int greenx(int l,int r){
    if(l==r) return -a[r];
    if(l>r) return 0;
    if(dpg[l][r]) return dpg[l][r];
    int c;
    if(a[l]==a[r]) c=redx(l+1,r-1)-a[l]-a[r];
    else c=INT_MAX;
    return dpg[l][r]=min({c,redx(l+1,r)-a[l],redx(l,r-1)-a[r]});
}
string result(int x){
    if(x>0) return "Red";
    if(x<0) return "Green";
    return "Tie";
}
int main(){
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << result(red(0,n-1)) << " ";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dpr[i][j]=0;
                dpg[i][j]=0;
            }
        }
        cout << result(redx(0,n-1)) << '\n';
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dpr[i][j]=0;
                dpg[i][j]=0;
            }
        }
    }
}