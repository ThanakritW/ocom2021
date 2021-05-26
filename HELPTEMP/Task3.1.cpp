#include<bits/stdc++.h>
using namespace std;
main(){
    double total=0;
    for(int i=1;i<=399999;i+=2){
        if(((i+1)/2)%2==1){
            total += 1.000000/i;
        }
        else{
            total -= 1.000000/i;
        }
    }
    cout << M_PI;
}
