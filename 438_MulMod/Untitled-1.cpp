#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main(){
    while(cin >> a >> b >> c){
        cout << ((a%c)*(b%c))%c << '\n';
    }
    return 0;
}