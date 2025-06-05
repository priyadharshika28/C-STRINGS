#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    n=sizeof(arr)/sizeof(arr[0]);
    int mc=0,cc=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cc++;
            if(cc>mc){
                mc=cc;
            }
        }else{
                cc=0;
            }
    }
    printf("%d",mc);
}
