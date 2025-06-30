#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    int count[256] = {0};
    int l1 = strlen(a);
    int l2 = strlen(b);
    if(l1!=l2){
        printf("not  anagram");
        return 0;
    }
    for(int i=0;i<l1;i++){
        int found =0;
        for(int j=0;j<l1;j++){
            if(a[i]==b[j]){
                found=1;
                break;
            }
        }
        if(!found){
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram");
}
