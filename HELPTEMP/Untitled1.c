#include<stdio.h>
int a,b,sum;
main(){
    scanf("%d %d",&a,&b);
    sum=0;
    for(int i=a;i<=b;i++){
    sum+=i;
    }
    printf("%d",sum);
}
