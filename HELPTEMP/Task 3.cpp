#include<bits/stdc++.h>
using namespace std;
main(){
    long i=1;
    double mul=1;
    while(mul>=0.5){
        mul = mul*((365-i)/365.0000000000);
        i++;
        cout << i-1 << ": "<< 1-mul << endl;
    }
}
