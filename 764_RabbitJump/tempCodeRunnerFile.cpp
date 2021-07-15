#include<bits/stdc++.h>
using namespace std;
long long n,k,s,a[1000100],f[1000100];
main(){
    cin >> n >> k >> s;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=k;i++){
        if(f[s]!=0){
            int loop_size=i-f[s];
            k=(k-i+1)%loop_size;
            for(int j=0;j<k;j++){
                s+=a[s];
            }
            break;
        }
        else{
            f[s]=i;
            s+=a[s];
        }
    }
    cout << s;
    return 0;
}