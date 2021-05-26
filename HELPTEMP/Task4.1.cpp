#include<bits/stdc++.h>
using namespace std;
main(){
    long a,b,total=0;
    cin >> a >> b;
    for(int j=a+1;j<=b;j++){
        for(int i=a;i<j;i++){
            total+=pow(-1,i)*(i+j);
        }
    }
    cout << total;
}
