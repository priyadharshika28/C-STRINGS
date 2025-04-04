#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int l = strlen(str);
    for(int i=0;i<l;i++){
        int count =0;
        for(int j=0;j<l;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            ch = str[i];
            printf("%c",ch);
        }
    }
}
