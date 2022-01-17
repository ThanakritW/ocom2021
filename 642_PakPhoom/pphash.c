#include<stdio.h>
#include<string.h>
#define ll unsigned long long
unsigned long long table[1010];
int n;
char temp[20010];
ll h(char* x){
    int res=0;
    int hv=0;
    for(int i=0;i<strlen(x);i++){
        if(x[i]=='A') hv=1;
        else if(x[i]=='T') hv=3;
        else if(x[i]=='C') hv=5;
        else hv=7;
        res=(res+hv)*11%18446744073709551614;
    }
    return res;
}
ll hans(char* x){
    int res=0;
    int hv=0;
    for(int i=0;i<strlen(x);i++){
        if(x[i]=='A') hv=3;
        else if(x[i]=='T') hv=1;
        else if(x[i]=='C') hv=7;
        else hv=5;
        res=(res+hv)*11%18446744073709551614;
    }
    return res;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&temp);
        table[i]=h(temp);
    }
    while(scanf("%s",&temp)!=EOF){
        ll found=0;
        ll hsed=hans(temp);
        for(int i=0;i<n;i++){
            if(table[i]==hsed){
                found=1;
                printf("YES\n");
                break;
            }
        }
        if(found==0) printf("NO\n");
    }
}