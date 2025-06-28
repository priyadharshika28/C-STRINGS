#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int l = strlen(str);
    int count =0,max=0;
    for(int i=0;i<l;i++){
        if(str[i]==' ' || str[i]=='\t'){
            if(max<count){
                max = count;
            }
            count=0;
        }
        else{
            count++;
        }
    }
    printf("%d",max);
}
