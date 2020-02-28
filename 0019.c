#include<stdio.h>
#include<math.h>

int main(){
    int n,i,r,index;
    scanf("%d",&n);
    unsigned long arr[n][2],Result=1000000000,tempS,tempB;
    for(i=0;i<n;i++){
        scanf("%ld %ld",&arr[i][0], &arr[i][1]);
    }

    for(i=1;i<pow(2,n);i++){
        r = i;
        index = 0;
        tempS = 1;
        tempB = 0;
        while(r>0){
            //printf("%ld ",r%2);
            if(r%2==1){
                //printf("%d ",index);
                //printf("%ld %ld ",arr[index][0],arr[index][1]);
                tempS *= arr[index][0];
                tempB += arr[index][1];
            }
            index++;
            r/=2;
        }
        if(abs(tempS-tempB)<Result){
                Result = abs(tempS-tempB);
            }
        //printf(" = %ld",abs(tempS-tempB));
        //printf("\n");
    }

    printf("%ld",Result);
    return 0;
}
