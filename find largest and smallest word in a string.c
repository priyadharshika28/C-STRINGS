#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int l = strlen(str);
    int count =0,start=0,min=l,mins=0,max=0,maxs=0;
    for(int i=0;i<l;i++){
        if(str[i]==' ' || str[i]=='\0'){
            if(min>count){
                min = count;
                mins = start;
            }
            if(max<count){
                max = count;
                maxs = start;
            }
            count =0;
            start=i+1;
        }
        else{
            count++;
        }
    }
    for(int i=mins;str[i]!=' ' && str[i]!='\t';i++){
        printf("%c",str[i]);
    } 
    printf("\n");
    for(int i=maxs;str[i]!=' ' && str[i]!='\t';i++){
        printf("%c",str[i]);
    }
}
