#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int l = strlen(str);
    for(int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
}
