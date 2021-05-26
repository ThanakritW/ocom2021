#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265359
int main(){
    float a,b,c,d,e,total=0;
    cin >> a >> b >> c >> d >> e;
    total = total + a + b + c + d + e;
    if(a>=b && a>=c && a>=d && a>=e) total = total-a;
    else if(b>=a && b>=c && b>=d && b>=e) total = total-b;
    else if(c>=a && c>=b && c>=d && c>=e) total = total-c;
    else if(d>=a && d>=b && d>=c && d>=e) total = total-d;
    else if(e>=a && e>=b && e>=c && e>=d) total = total-e;
    if(a<=b && a<=c && a<=d && a<=e) total = total-a;
    else if(b<=a && b<=c && b<=d && b<=e) total = total-b;
    else if(c<=a && c<=b && c<=d && c<=e) total = total-c;
    else if(d<=a && d<=b && d<=c && d<=e) total = total-d;
    else if(e<=a && e<=b && e<=c && e<=d) total = total-e;
    else if(e<=a && e<=b && e<=c && e<=d) total = total-e;
    total = total/3;
    cout << total;
}
