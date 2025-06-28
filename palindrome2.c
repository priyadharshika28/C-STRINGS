#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int start = 0;
    int end = strlen(str)-1;
    int ispalin = 1;
    while(start<end){
        if(str[start]!=str[end]){
            ispalin = 0;
            break;
        }
        start++;
        end--;
    }
    if(ispalin){
        printf("pain");
    }
    else{
        printf("not palin");
    }
}
