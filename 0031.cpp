#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a[3],c=0;
    cin >> a[0] >> a[1] >> a[2];
    while(a[0] != 1 || a[1] != 1 || a[2] != 1){
        if(a[0] != 1){
            c++;
            a[0] /=2;
        }
        if(a[1] != 1){
            c++;
            a[1] /=2;
        }
        if(a[2] != 1){
            c++;
            a[2] /=2;
        }
    }
    cout << c;
    return 0;
}
