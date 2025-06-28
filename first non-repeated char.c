#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int freq[256]={0};
    for(int i=0;str[i];i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;str[i];i++){
        if(freq[(unsigned char)str[i]]==1){
            printf("%c",str[i]);
            return 0;
        }
    }
    printf("all repeated");
}
