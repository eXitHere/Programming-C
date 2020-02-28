#include<stdio.h>
#include<string.h>
int main(){
    char input[16];
    scanf("%s",input);
    int i,j,k;
    int len = strlen(input); // length of String
    int index=0;
    for(i=0;i<5;i++){
        for(j=0;j<len;j++){
            for(k=0;k<4;k++){
                if(j%3==2 && j!=0){
                    if((i==0 || i ==4) && k==2){
                        printf("*");
                    }
                    else if((i==1 || i==3) &&(k==1 || k ==3)){
                        printf("*");
                    }
                    else if(i==2 && k==2){
                        printf("%c",input[index++]);
                    }
                    else if(i==2 && (k==0 || k==4)){
                        printf("*");
                    }
                    else printf(".");
                }
                else{
                    if((i==0 || i ==4) && k==2){
                        printf("#");
                    }
                    else if((i==1 || i==3) &&(k==1 || k ==3)){
                        printf("#");
                    }
                    else if(i==2 && k==2){
                        printf("%c",input[index++]);
                    }
                    else if(i==2 && (k==0 || k==4)){
                        if(j-1%3==2) prinf("*");
                        else printf("#");
                    }
                    else printf(".");

                }
            }
        }
        printf("\n");
    }
    return 0;
}



