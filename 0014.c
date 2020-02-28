#include<stdio.h>


/*
    using Euclid
*/

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(b>a){ // SWAP
        a = a+b;
        b = a-b;
        a = a-b;
    }
    while(a%b != 0){
        c = a%b;
        a = b;
        b = c;
    }

    printf("%d",b);
    return 0;
}
