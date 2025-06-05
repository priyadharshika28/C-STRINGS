#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int count=0;
    for(int i=0;i<=l1-l2;i++){
        int match=1;
        for(int j=0;j<l2;j++){
            if(str1[i+j]!=str2[j]){
                match=0;
                break;
            }
        }
        if(match){
            count++;
        }
    }
    printf("%d",count);
}
