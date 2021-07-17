#include<iostream>
using namespace std;
double a,b,c;
int main(){
    cin >> a >> b >> c;
    printf("%lf %lf %lf is ",&a,&b,&c);
    if(a+b>c){
        if(a*a+b*b!=c*c){
            cout << "not right triangle, but it is a triangle.";
        }
        cout << "right triangle.";
    }
    else cout << "not a triangle.";
    return 0;
}