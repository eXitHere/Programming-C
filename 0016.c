#include<stdio.h>

int main(){
    char name[3][10] = {"Adrian","Bruno","Goran"};
    char patt[3][7] = {"ABC","BABC","CCAABB"};
    int score[3] = {0};
    int n,i,j,max=-1;
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",arr);
    for(i=0;i<n;i++){
        if(arr[i] == patt[0][i%3]){
            score[0]++;
            if(score[0] > max) max = score[0];
        }

        if(arr[i] == patt[1][i%4]){
            score[1]++;
            if(score[1] > max) max = score[1];
        }

        if(arr[i] == patt[2][i%6]){
            score[2]++;
            if(score[2] > max) max = score[2];
        }
    }
    printf("%d\n",max);
    for(int i=0;i<3;i++){
        if(score[i] == max){
            printf("%s\n",name[i]);
        }
    }

    return 0;
}
