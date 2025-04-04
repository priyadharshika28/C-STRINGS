#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char res[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int j =0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='0'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            res[j] = str[i];
            j++;
        }
    }
    res[j]='\0';
    printf("%s",res);
}
