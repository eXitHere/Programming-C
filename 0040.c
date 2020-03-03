#include<stdio.h>
#include<string.h>

int main(){
    char input[1001];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",input);
        //printf("%d\n",input[strlen(input)-1]-'0');
        int lastDigit = (input[strlen(input)-1]-'0');
        if(lastDigit==2 && strlen(input) == 1) printf("T\n");
        else if(lastDigit%2==0) printf("F\n");
        else printf("T\n");
    }
}
