#include<stdio.h>

int main(){
    char arr[51];
    scanf("%s",arr);
    int i=0,output=1;

    while(arr[i]!='\0'){
        //printf("%c ",arr[i]);
        if(arr[i] == 'A'){
            if(output == 1) output = 2;
            else if(output == 2) output = 1;
        }else if(arr[i] == 'B'){
            if(output == 2) output = 3;
            else if(output == 3)output = 2;
        }else if(arr[i] == 'C'){
            if(output == 1) output = 3;
            else if(output == 3) output = 1;
        }
        //printf("%d ",output);
        i++;
    }

    printf("%d",output);
    return 0;
}
