#include<bits/stdc++.h>
using namespace std;
int n,h,m,anst,ansm;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> h >> m;
        if(h>20 || (h==20 && m>45)) cout << "0 0\n";
        else{
            anst=(h-20)*30;
            ansm=(h-20)*60;
            anst+=ceil((float)(45-m)/2.00);
            ansm+=45-m;
            cout << ansm << " " << anst << '\n';
        }
    }
}
