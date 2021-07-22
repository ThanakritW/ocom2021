#include<iostream>
using namespace std;
long long mx,p,t,n;
int main(){
    cin >> n;
    p=0;
    mx=0;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t-p>mx) mx=t-p;
        p=t;
    }
    cout << mx;
    return 0;
}