#include<bits/stdc++.h>
using namespace std;
int one,two;
main(){
    for(int i=10;i<100;i++){
        cout << i << i << " is type ";
        if(i/10==i%10){
            cout << '2';
            two++;
        }
        else{
            cout << '1';
            one++;
        }
        cout << '\n';
    }
    cout << "There are type 1 : " << one;
    cout << "\nThere are type 2 : " << two;
}
