#include<iostream>

using namespace std;

int main(){
    string number;
    int a1=0,a2=0;
    cin >> number;
    for(int i=0;i<number.length();i++){
        a1 = ((number[i]-'0')+a1*10)%3;
        a2 = ((number[i]-'0')+a2*10)%11;
        //cout << number[i]-'0' << endl;
    }
    cout << a1 <<" " << a2;

    return 0;
}
