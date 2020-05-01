#include<iostream>

using namespace std;

unsigned long long fac(int n,int r){
    //cout << r << " : " << n << endl;
    unsigned long long result = 1;
    for(int i=r;i<=n;i++){
        result *= i;
    }
    return result;
}

int main(){
    int n;
    cin >> n; //n!/(n-r)!*r!
    if(n<=2){
        cout << 2;
        return 0;
    }
    if(n%2==1) n++;
    cout << fac(n,(n/2)+1)/fac(n-(n/2),1);
    return 0;
}
