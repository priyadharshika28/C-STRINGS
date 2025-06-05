#include<stdio.h>
#include<ctype.h>
#include<string.h>
int areanagram(char s1[], char s2[]){
    int count[256] = {0};
    int i;
    if(strlen(s1) != strlen(s2)){
        return 0;
    }
    for(i=0;s1[i]&&s2[i];i++){
        count[tolower(s1[i])]++;
        count[tolower(s2[i])]--;
    }
    for(i=0;i<256;i++){
        if(count[i]!=0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s1[100];
    char s2[100];
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';
    if(areanagram(s1,s2)){
        printf("anagram");
    }
    else{
        printf("not anagram");
    }
}
