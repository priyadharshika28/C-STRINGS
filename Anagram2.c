#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    if(strlen(a)!=strlen(b)){
        printf("not anagram");
        return 0;
    }
    int count[26] = {0};
    for(int i=0;a[i];i++){
        count[a[i]-'a']++;
    }
    for(int i=0;b[i];i++){
        count[b[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram");
    return 0;
}
