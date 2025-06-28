#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char suffix[100];
    fgets(str,100,stdin);
    fgets(suffix,100,stdin);
    str[strcspn(str,"\n")]='\0';
    suffix[strcspn(suffix,"\n")]='\0';
    int l1= strlen(str);
    int l2 = strlen(suffix);
    if(l2>l1 || strcmp(str+l1-l2,suffix)!=0){
        printf("false");
    }
    else{
        printf("true");
    }
        
}
