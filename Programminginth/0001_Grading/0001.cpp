#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    cin >> a >> b >> c;
    a+=b;
    a+=c;
    if(a>79) cout << "A";
    else if(a>74) cout << "B+";
    else if(a>69) cout << "B";
    else if(a>64) cout << "C+";
    else if(a>59) cout << "C";
    else if(a>54) cout << "D+";
    else if(a>49) cout << "D";
    else cout << "F";
    return 0;
}