#include<bits/stdc++.h>
using namespace std;
int n,m;
void mulnow(int x, int y){
    if(y>m) return;
    else{
        cout << x << " x " << y << " = " << x*y << '\n';
        mulnow(x,y+1);   
    }
}
int main(){
    cin >> n >> m;
    mulnow(n,1);
    return 0;
}