#include<stdio.h>

int main(){
    int n,counter[10001]={0},i,input,max=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&input);
        counter[input]++;
        if(counter[input]>max){
            max = counter[input];
        }

        //printf("%d\t",counter[input]);
    }

    for(i=0;i<10001;i++){
        if(max == counter[i]){
            printf("%d ",i);
        }
    }

    return 0;

}
