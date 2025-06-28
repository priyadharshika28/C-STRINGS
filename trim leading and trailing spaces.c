#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int start = 0;
    int end = strlen(str)-1;
    while(str[start]==' '){
        start++;
    }
    while(str[end]==' ' || str[end]=='\t'){
        end--;
    }
    for(int i=start;i<=end;i++){
        printf("%c",str[i]);
    }
}
