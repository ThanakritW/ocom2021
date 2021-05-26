#include<bits/stdc++.h>
using namespace std;
long a[500100]={},n,temp,cnt=0;
main(){
    cin >> n;
    vector<long> v;
    for(long i=0;i<n;i++){
        cin >> temp;
        if(temp%2 == 0) a[i]=temp;
        else {
            v.push_back(temp);
            a[i]=1;
        }
    }
    sort(v.begin(),v.end());
    for(long i=0;i<n;i++){
        if(a[i]==1) {
            cout << v[cnt] << " ";
            cnt++;
        }
        else cout << a[i] << " ";
    }
}
