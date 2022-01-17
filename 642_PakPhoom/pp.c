#include <stdio.h>
#include <string.h>
int n;
char a[2010][10010],temp[10010],s[10010];
int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s",&temp);
        for(int j=0;j<strlen(temp);j++){
            if(temp[j]=='A') a[i][j]='T';
            else if(temp[j]=='T') a[i][j]='A';
            else if(temp[j]=='C') a[i][j]='G';
            else a[i][j]='C';
        }
    }
    while (scanf("%s",&s)!=EOF){
        int chk=0;
        for(int i=0;i<n;i++){
            if(strcmp(s,a[i])==0){
                chk=1; break;
            }
        }
        if(chk==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}