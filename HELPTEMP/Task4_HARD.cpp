#include<bits/stdc++.h>
using namespace std;
long n,temp,a[10010]={0},mx=0,ans=0;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        a[temp]++;
        if(a[temp]>mx){
            mx=a[temp];
            ans=temp;
        }
    }
    cout << "Mode is " << ans << "\n# of repetition is " << mx;
}
