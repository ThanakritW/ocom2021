#include<bits/stdc++.h>
using namespace std;
string cmp(int a,int b){
    if(a>=b) return "ME";
    else if(a<b) return "LE";
}
main(){
    int x,z;
    cin >> x >> z;
    cout << cmp(x,z);

}
