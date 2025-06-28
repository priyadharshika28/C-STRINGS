#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char sub[100];
    fgets(sub,100,stdin);
    sub[strcspn(sub,"\n")]='\0';
    if(strstr(str,sub)){
        printf("contains sub");
    }
    else{
        printf("not");
    }
}
