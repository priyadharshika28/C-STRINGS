#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]=0;
    int freq[256] = {0};
    int flag=1;
    for(int i=0;str[i];i++){
        if(freq[(unsigned char)str[i]]++){
            flag = 0;
        }
    }
    printf(flag?"unique":"not unique");
}
