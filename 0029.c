#include<stdio.h>
#include<math.h>
int main(){
    float n,m;
    scanf("%f %f",&n,&m);
    if(n>m){
        printf("2");
        return 0;
    }
    printf("%.0f",ceil(m/n));
    return 0;
}
