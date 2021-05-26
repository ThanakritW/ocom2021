#include<bits/stdc++.h>
using namespace std;
main(){
    long total=0,sum,a,b;
    cin >> a >> b;
    for(int i=a;i<b;i++){
        sum=0;
        for(int j=i+1;j<=b;j++){
            sum+=i+j;
        }
        total+=pow(-1,i)*sum;
    }
    cout << total;
}
