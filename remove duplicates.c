#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int l = strlen(str);
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j]){
                for(int k=j;k<l;k++){
                    str[k] = str[k+1];
                }
                l--;
                j--;
            }
        }
    }
    printf("%s",str);
}
