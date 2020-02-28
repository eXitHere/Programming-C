#include<stdio.h>

int main(){
    int input,i,j,k,max=0,indexMax=-1,temp =0;
    for(i=0;i<5;i++){
        temp =0;
        for(j=0;j<4;j++){
            scanf("%d",&input);
            temp += input;
        }

        if(temp>max){
            max = temp;
            indexMax = i+1;
        }
    }
    printf("%d %d",indexMax,max);
    return 0;
}
