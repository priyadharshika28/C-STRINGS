#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int pos;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]=0;
    scanf("%d",&pos);
    int l = strlen(str);
    for(int i=pos;i<l;i++){
        str[i] = str[i+1];
    }
    printf("%s",str);
}
