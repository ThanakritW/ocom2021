#include<iostream>
using namespace std;
long long s,t,n;
int main(){
    cin >> s >> t >> n;
    if(n==0 || (n<0 && s<t) || (n>0 && s>t){
        cout << "Go to hell";
        return 0;
    }
    for(int i=s;i<t;i+=n) cout << i << '\n';
    cout << t;
}