#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int N;
    scanf("%d", &N);
    cout << fixed << setprecision(6);
    if(N==1){
        cout << 2.0 << endl;
    }
    else if(N==3){
        cout << 3.732051 << endl;
    }
    else if(N%2==1){
        cout << N+0.464102 << endl;
    }
    else{
        cout << float(N) << endl;
    }
    return 0;
}
