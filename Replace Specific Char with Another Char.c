#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            str[i] = 'b';
        }
        else if(str[i]=='t'){
            str[i] = 'g';
        }
        else if(str[i]>='0' && str[i]<='9'){
            str[i] = 'n';
        }
    }
    printf("%s",str);
}
