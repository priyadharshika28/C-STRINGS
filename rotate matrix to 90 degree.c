#include<stdio.h>
#include<string.h>
int main(){
    char str[100][100];
    int n;
    int temp;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        fgets(str[i],100,stdin);
        str[i][strcspn(str[i],"\n")]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            temp = str[i][j];
            str[i][j] = str[j][i];
            str[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        int start=0;
        int end =n-1;
        while(start<end){
            temp = str[i][start];
            str[i][start] = str[i][end];
            str[i][end] = temp;
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",str[i][j]);
        }
        printf("\n");
    }
}
