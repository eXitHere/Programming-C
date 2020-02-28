/*
    Author : eXit-Guy
*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    bool capital = false,small = false;
    char input[10001];
    int i;
    scanf("%s",input);
    for(i=0;input[i]!='\0';i++){
        if(input[i] >= 'a' && input[i] <= 'z') small = true;
        else if(input[i] >= 'A' && input[i] <= 'Z') capital = true;
    }
    if (capital == true && small == true) printf("Mix");
    else if (capital == true) printf("All Capital Letter");
    else printf("All Small Letter");
    return 0;
}
