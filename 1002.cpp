#include<iostream>

using namespace std;

int main(){
    int n,count[5]={0};
    /*
    i v x l c
    a b c d e
    */
    string  roman[9] = {"e","ce", "d","cd", "c","ac","b","ab", "a" };
    int numbers[9] = {100,90,50,40,10,9,5,4,1 };

    cin >> n;
    for(int i=1;i<=n;i++){
        int I = i;
        for(int j=0;j<9;j++){
            while(I>=numbers[j]){
                for(int k=0;k<roman[j].length();k++){
                    count[roman[j][k]-'a']++;
                }
                I -= numbers[j];
                //cout << I << " ";
            }
            //cout << endl;
        }
    }
    for(int i=0;i<5;i++){
        cout << count[i] << " ";
    }
    return 0;
}