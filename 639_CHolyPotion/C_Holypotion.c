#include<stdio.h>
long long n,m,a[100100],l,r,temp,md,bl,br,ansr,ansl;
int main(){
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int k=0;k<m;k++){
        scanf("%lld %lld",&l,&r);
        if(r<l){
            temp=r;
            r=l;
            l=temp;
        }
        //upperbound
        bl=0;br=n;
        if(r>a[n-1]){
            ansr=n-1;
        }
        else{
            while(bl<br){
                md=bl+(br-bl)/2;
                if(r>=a[md]){
                    bl=md+1;
                }
                else{
                    br = md;
                }
            }
            while(a[md]>r && md>0) md--;
            ansr=md;
        }
        //lowerbound
        bl=0;br=n;
        if(l<a[0]){
            ansl=0;
        }
        else{
            while(bl<br){
                md=bl+(br-bl)/2;
                if(l<=a[md]){
                    br=md;
                }
                else{
                    bl = md+1;
                }
            }
            while(a[md]<l && md<n-1) md++;
            ansl=md;
        }
        printf("%lld\n",ansr-ansl+1);
    }
    return 0;
}