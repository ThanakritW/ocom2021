#include<bits/stdc++.h>
using namespace std;
int n,k,a[30100];
long long total[30100],mx;
main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int l=0;
    for(int i=1;i<n;i++){
        while(a[i]-a[l]>k){
            total[l]=i-l-1;
            l++;
        }
    }
    while(l<n){
        total[l]=n-l-1;
        l++;
    }
    mx=-1;
    for(int i=0;i<n;i++){
        mx=max(total[i],mx);
    }
    cout << mx;
}
#include<bits/stdc++.h>
using namespace std;
long long n,k,a[30100],b[30100],dis=0,cnt=0,mx=0,it=1,temp;
int main()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        b[i]=a[i]-a[i-1];
        if(b[i]+dis<=k)
        {
            dis +=b[i];
            cnt++;
        }
        else
        {
            if(cnt > mx)
            {
                mx=cnt;
            }
            while(b[i]+dis>k)
            {
                dis-=b[it];
                it++;
                cnt--;
            }
        }
    }
    if(cnt > mx)
    {
        mx=cnt;
    }
    cout << mx;
    return 0;
}
