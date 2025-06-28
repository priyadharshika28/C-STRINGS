#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int freq[256]={0};
    for(int i=0;str[i];i++){
        if(++freq[str[i]]==2){
            printf("%c",str[i]);
            return 0;
        }
    }
    printf("no char repeat");
}
