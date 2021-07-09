#include<bits/stdc++.h>
using namespace std;
double degree,dis;
main(){
    cout << "Angle (degree): ";
    cin >> degree;
    cout << "Distance (km): ";
    cin >> dis;
    string cal=to_string(360.000000000000000*dis/degree);
    int sz=cal.size()-5;
    cout << "Eratosthenes: \"the earth circumference is about ";
    for(int i=0;i<sz;i++){
        cout << cal[i];
        if((sz-i)%3==0 && i<sz-4)  cout << ',';
    }
    cout << " km.\"";
}
