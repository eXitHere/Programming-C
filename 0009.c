#include<stdio.h>

int main(){
    int n[3],i,max,min,mean;
    char c[4];

    for(i=0;i<3;i++) scanf("%d",&n[i]);
    scanf("%s",c);
    //printf("%s",c);
    if(n[0] > n[1] && n[1] > n[2]){
        max = n[0];
        mean = n[1];
        min = n[2];
    }else if(n[0] > n[2] && n[2] > n[1]){
        max = n[0];
        mean = n[2];
        min = n[1];
    }else if(n[1] > n[2] && n[2] > n[0]){
        max = n[1];
        mean = n[2];
        min = n[0];
    }else if(n[1] > n[0] && n[0] > n[2]){
        max = n[1];
        mean = n[0];
        min = n[2];
    }else if(n[2] > n[1] && n[1] > n[0]){
        max = n[2];
        mean = n[1];
        min = n[0];
    }else{
        max = n[2];
        mean = n[0];
        min = n[1];
    }
    //printf("%d %d %d\n",max,mean,min);
    for(i=0;i<3;i++){
        if(c[i] == 'A') printf("%d ",min);
        else if(c[i] == 'B') printf("%d ",mean);
        else if(c[i] == 'C') printf("%d ",max);
    }
    return 0;
}
