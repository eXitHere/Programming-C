#include<stdio.h>

int main(){
    int arr[9],i,j,sum=0,k;

    for(i=0;i<9;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(i==j) continue;

            if(sum-arr[i]-arr[j] == 100){
                for(k=0;k<9;k++){
                    if(k == i || k == j) continue;
                    printf("%d\n",arr[k]);
                }
                return 0;
            }
        }
    }
}
