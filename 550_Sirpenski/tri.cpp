#include<bits/stdc++.h>
#define x std::cout
int n;
main(){
    std::cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            (i&j)?x <<".":x <<"#";
        x << '\n';
    }
}