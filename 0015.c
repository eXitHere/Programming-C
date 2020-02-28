#include<stdio.h>

int abs(int n){
    if(n<0) return n*-1;
    return n;
}

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    if(abs(a-b)>abs(b-c)){
        printf("%d",abs(a-b)-1);
    }
    else{
        printf("%d",abs(b-c)-1);
    }
    return 0;
}
