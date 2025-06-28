#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int l = strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==' ' || str[i]=='\t'){
            printf("%s","%20");
        }
        else{
            printf("%c",str[i]);
        }
    }
}
