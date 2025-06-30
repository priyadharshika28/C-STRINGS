#include<stdio.h>
#include<string.h>
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
        for(int j=0;j<strlen(matrix[i]);j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
}


/* by using scanf():
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%c", &matrix[i][j]);
    }
}
*/
