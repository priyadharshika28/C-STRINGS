#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
