#include<iostream>
using namespace std;

int main(){
    int M[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string D[] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
    int d,m,sum=0;
    cin >> d >> m;
    for(int i=0;i<m-1;i++) sum+= M[i];
    //cout << sum + d << endl;
    cout << D[(sum+d-1)%7] << endl;
    return 0;
}
