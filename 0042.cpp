#include<iostream>
using namespace std;

int main(){
    int n,i;
    unsigned long long powN;
    long double output;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> powN;
        output = 1;
        while(powN--){
            output *= 2;
        }
        printf("%.0Lf\n",output);
        //cout << output*10 << endl;
    }
}
