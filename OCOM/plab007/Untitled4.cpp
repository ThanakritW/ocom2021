#include<bits/stdc++.h>
using namespace std;
long n,temp,a[10010],q[100100],m,ans=0,cnt=0, result;
int bsearch(int low,int high, int tg){
    int mid=(low+high)/2;
    if(a[mid] == tg) return mid;
    else if(a[high] == tg) return high;
    else if(a[low] == tg) return low;
    else if(low==high || low==high-1) return -1;
    else if(tg>a[mid] && tg<a[low]) return  bsearch(low,mid,tg);
    else if(tg<a[mid] && tg>a[high]) return bsearch(mid,high,tg);
    return -1;
}
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<long>());
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> q[i];
    }
    for(int i=0;i<m;i++){
        result=bsearch(0,n-1,q[i])+1;
        if(result!=0){
            ans+=result;
            cnt++;
        }
    }
    cout << cnt << " " << ans;
}
