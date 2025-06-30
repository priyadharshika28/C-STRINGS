#include<stdio.h>
#include<string.h>
int main(){
    char str[100][100];
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        fgets(str[i],100,stdin);
        str[i][strcspn(str[i],"\n")]=0;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=strlen(str[i])-1;j>=0;j--){
            printf("%c ",str[i][j]);
        }
        printf("\n");
    }
}
