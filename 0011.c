#include<stdio.h>
int main(){
    int arr[43] = {0},input,i,result = 10;
    for(i=0;i<10;i++){
        scanf("%d",&input);
        arr[input%42]++;
        if(arr[input%42]>1){
            result--;
        }
    }
    printf("%d",result);
}