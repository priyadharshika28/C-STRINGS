#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int count =0;
    int l = strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("count:%d\n",count);
    if(count%2==0){
        printf("%d is even\n",count);
    }
    else{
        int flag=0;
        if(count>1){
            for(int j=2;j<=count/2;j++){
                if(count%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("%d is prime\n",count);
            }
        }
        else{
            printf("%d is odd but not prime\n",count);
        }
    }
}
