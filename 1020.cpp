#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string n;
    cin >> n;
    int len = n.length();
    for(int i=0,j=len-1;i<len/2;i++,j--){
        n[i] = toupper(n[i]);
        n[j] = toupper(n[j]);
        //cout << n[i] << " " << n[j] << endl;
        if(n[i] != n[j]){
            cout << "No";
            return 0;
        }
    }
    for(int i=0,j=len/2-1;i<len/4;i++,j--){
        if(n[i] != n[j]){
            cout << "Palindrome";
            return 0;
        }
    }
    cout << "Double Palindrome";
    return 0;
}
