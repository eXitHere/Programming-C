#include<stdio.h>

int main(){
    int i,j,k,n;
    scanf("%d",&n);

    int col = n%2==0?n-1:n;

    for(i=0;i<n/2;i++){
        for(j=0;j<col;j++){
            if(j == col/2 +i || j == col/2-i){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    for(i=n%2==0?(n-1)/2:n/2;i>=0;i--){
        for(j=0;j<col;j++){
            if(j == col/2 +i || j == col/2-i){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}
