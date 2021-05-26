#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
long n,temp,cnt,mx=0;
main(){
    multiset<long> s;
    multiset<long> :: iterator it;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        s.insert(temp);
    }
    it=--s.end();
    cnt=s.erase(*it);
    cout << cnt;
}
