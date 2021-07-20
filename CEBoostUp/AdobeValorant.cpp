#include<bits/stdc++.h>
using namespace std;
long long total,ans,n;
int main(){
    cin >> n;
    if(n%2==1){
        total=2;
        for(int i=ceil(n/2.00);i<=n;i++){
            total=total*i;
        }
        for(int i=1;i<=ceil(n/2.00);i++){
            total=total/i;    
        }
        cout << total;
    }
    else{
        total=1;
        for(int i=n/2+1;i<=n;i++){
            total=total*i;
        }
        for(int i=1;i<=n/2;i++){
            total=total/i;    
        }
        ans=total;
        total=2;
        for(int i=n/2+2;i<=n;i++){
            total=total*i;
        }
        for(int i=1;i<=n/2+1;i++){
            total=total/i;    
        }
        cout << ans+total;
    }
}