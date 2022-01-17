#include<iostream>
uint64_t a,b;main(){while(std::cin>>a>>b)std::cout<<((a|b)&~(a&b))<<'\n';}