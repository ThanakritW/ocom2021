#include<bits/stdc++.h>
using namespace std;
main(){
    long n;
    cin >> n;
    if(n==1) cout << "8";
    else if(n!=0){
        cout << "*-";
        for(int i=2;i<n;i++){
            cout << "*";
        }
        cout << endl;
        for(int i=1;i<n/2;i++){
            for(int j=0;j<i/2;j++){
                cout << "*-";
            }
            if(i==1)i++;
            if(i%2==1){
//                cout
            }
            cout << endl;
        }
        if(n%2==1){
            for(int i=0;i<n/2;i++)
                cout << "*-";
            cout << "*\n";
        }
    }
}
