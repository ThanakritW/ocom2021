#include<iostream>
#include<math.h>
using namespace std;
double d,t,total;
int anst,ansd;
int main(){
    cin >> d;
    cin >> t;
    if(d<1){
        cout << "Error";
        return 0;
    }
    total=0;
    if(d>80){
        total+=(d-80)*10.5;
        d=80;
    }
    if(d>60){
        total+=(d-60)*9;
        d=60;
    }
    if(d>40){
        total+=(d-40)*8;
        d=40;
    }
    if(d>20){
        total+=(d-20)*7.5;
        d=20;
    }
    if(d>10){
        total+=(d-10)*6.5;
        d=10;
    }
    if(d>0){
        total+=(d-1)*5.5;
        total+=35;
    }
    ansd=ceil(total);
    if(ansd%2==0) ansd+=1;
    anst=t*2;
    anst-=anst%2;
    cout << anst+ansd;
    return 0;
}