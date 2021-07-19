#include<iostream>
using namespace std;
double a,b,c;
int main(){
    cin >> a >> b >> c;
    printf("%.4lf, %.4lf and %.4lf are ",a,b,c);
    if(a+b>c && b+c>a || a+c>b){
        if(a*a+b*b!=c*c){
            cout << "NOT sides of RIGHT triangle, just a TRIANGLE.";
            return 1;
        }
        else cout << "sides of RIGHT triangle.";
    }
    else cout << "NOT sides of triangle.";
    return 0;
}