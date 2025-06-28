#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char prefix[100];
    fgets(str,100,stdin);
    fgets(prefix,100,stdin);
    str[strcspn(str,"\n")]='\0';
    prefix[strcspn(prefix,"\n")]='\0';
    if(strncmp(str,prefix,strlen(prefix))==0){
        printf("true");
    }
    else{
        printf("false");
    }
}
