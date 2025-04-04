#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    char res[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(!(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')){
            res[j] = str[i];
            j++;
        }
    }
    res[j]='\0';
    printf("%s",res);
}
