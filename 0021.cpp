#include<iostream>
using namespace std;

bool isAEIOU(char n){
    return n=='a' || n=='e' || n=='i' || n=='o' || n=='u';
}

int main(){
    string input;
    getline(cin,input);
    for(int i=0;i<input.length()-2;i++){
        //cout << isAEIOU(input[i]) << endl;
        if(isAEIOU(input[i]) &&
           input[i+1] == 'p' &&
           input[i+2] == input[i]){
                //cout << "FOUND" << endl;
                input[i+1] = '*';
                input[i+2] = '*';
                i+=2;
           }
    }

    for(int i=0;i<input.length();i++){
        if(input[i] != '*') cout << input[i];
    }
    return 0;
}
