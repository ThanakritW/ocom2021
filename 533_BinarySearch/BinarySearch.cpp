#include <iostream>
#include "binary_search.h"
using namespace std;
unsigned long long l=0,r,c;
int main(){
    r=get_n();
    for(int i=0;i<50;i++){
        c=(l+r)/2;
        if(is_equal(c)){
            answer(c);
            break;
        }
        if(is_less(c)){
            l=c+1;
        }
        else{
            r=c-1;
        }
    }
    while(l<=r){
        if(is_equal(l)){
            answer(l);
        }
        l++;
    }
}
