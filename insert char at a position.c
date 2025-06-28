#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    int pos;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]=0;
    scanf("%c",&ch);
    scanf("%d",&pos);
    int l = strlen(str);
    for(int i=l;i>=pos;i--){
        str[i+1] = str[i];
    }
    str[pos] = ch;
    printf("%s",str);
}
