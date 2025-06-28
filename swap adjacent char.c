#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int l = strlen(str);
    for(int i=0;i<l;i+=2){
        int t = str[i];
        str[i] =str[i+1];
        str[i+1] = t;
    }
    printf("%s",str);
}
