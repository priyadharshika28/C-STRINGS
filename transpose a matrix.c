#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char matrix[100][100];
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        fgets(matrix[i],100,stdin);
        matrix[i][strcspn(matrix[i],"\n")]='\0';
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
}
