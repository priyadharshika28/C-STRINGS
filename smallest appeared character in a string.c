#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int l = strlen(str);
    int count[256] = {0};
    int mincount = l;
    char minchar;
    for(int i=0;i<l;i++){
        str[i] = tolower(str[i]);
    }
    for(int i=0;i<l;i++){
        if(str[i]!=' ' && str[i]!='\t'){
            count[str[i]]++;
        }
    }
    for(int i=0;i<256;i++){
        if(count[i]>0 && count[i]<mincount){
            mincount = count[i];
            minchar = i;
        }
    }
    printf("%c",minchar);
}
