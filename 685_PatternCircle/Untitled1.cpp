#include<bits/stdc++.h>
using namespace std;
int n,r;
float d;
main(){
    cin >> n;
    r=n/2;
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            d=sqrt((x-r)*(x-r)+(y-r)*(y-r));
            if(d > r-0.5 && d < r+0.5){
                cout << '#';
            }
            else{
                cout << '-';
            }
        }
        cout << '\n';
    }
}
