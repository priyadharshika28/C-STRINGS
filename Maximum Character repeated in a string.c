#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char c;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int count =0,max=0;
    int l = strlen(str);
    for(int i=0;i<l;i++){
        count =0;
        for(int j=0;j<l;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(max<count){
            max = count;
            c=str[i];
        }
    }
    printf("%d %c",max,c);
}
