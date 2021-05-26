/*
TASK: PLAB022 , 750
LANG: C++
AUTHOR: THANAKRIT WONG-ASA
CENTER: KKU022
*/
#include<bits/stdc++.h>
using namespace std;
long long a,c;
string b;
main(){
    cin >> a >> b >> c;
    if(b=="+") cout << a+c;
    else if(b=="-") cout << a-c;
    else if(b=="*") cout << a*c;
    else if(b=="/") cout << a/c;
}
