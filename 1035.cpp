#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int P){
    for(int i=2;i<=sqrt(P);i++){
        if(P%i==0){
            return false;
        }
    }
    return true;
}

bool isPalin(int P){
    string n = to_string(P);
    for(int i=0,j=n.length()-1;i<n.length();i++,j--){
        if(n[i] != n[j]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    while(1){
        if(isPrime(n) & isPalin(n)){
            cout << n;
            return 0;
        }
        n++;
    }
    return 0;
}
