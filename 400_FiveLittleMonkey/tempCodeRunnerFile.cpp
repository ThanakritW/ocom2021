#include<bits/stdc++.h>
using namespace std;
int n,h,m,ans;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> h >> m;
        if(h>20 || (h==20 && m>=45)){
            cout << "0 0\n";
        }
        else{
            ans=(20-h)*60+45-m;
            cout << ans << " " << ceil((float)(ans/2)) << '\n';
        }
    }
}
