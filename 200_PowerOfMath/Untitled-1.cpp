#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b >> c;
    if(a+b==c) cout << 1;
    else if(a*a+b*b==c*c) cout << 2;
    else cout << "NO";
    return 0;
}