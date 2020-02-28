/*
    Author : eXit-Guy
*/
#include<stdio.h>

int main(){
    int n,i,input,max=-2000000000,min=200000000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&input);
        if(input>max) max = input;
        if(input<min) min = input;
    }
    printf("%d\n%d",min,max);
    return 0;
}
