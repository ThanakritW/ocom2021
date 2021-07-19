#include<stdio.h>
#include<string.h>
char id[100],name[100],rank[100];
int main(){
    scanf(" %[^\n]s",id);
    scanf(" %[^\n]s",name);
    scanf(" %[^\n]s",rank);
    printf("++++++++++++++++++++++++++++++++++++++++\n+                                      +\n+             id: %s",id);
    for(int i=0;i<(21-strlen(id));i++) printf(" ");
    printf("+\n+           NAME: %s",name);
    for(int i=0;i<(21-strlen(name));i++) printf(" ");
    printf("+\n+       category: %s",rank);
    for(int i=0;i<(21-strlen(rank));i++) printf(" ");
    printf("+\n+                                      +\n++++++++++++++++++++++++++++++++++++++++");
}