#include<bits/stdc++.h>
using namespace std;
long sum(int a){
    if(a==1) return 1;
    return a + sum(a-1);
}
main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << sum(x)-sum(y)+sum(z);
}
