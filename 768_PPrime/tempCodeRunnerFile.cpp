#include<bits/stdc++.h>
using namespace std;
long long a;
int main(){
    cin >> a;
    if(a==1){
        cout << "No";
        return 1;
    }
    for(long long i=2;i<=sqrt(a);i++){
        if(a%i==0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}