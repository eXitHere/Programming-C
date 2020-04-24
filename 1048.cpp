#include<iostream>
using namespace std;

int main(){
    int n,k,counter = 0;
    cin >> n >> k;
    for(int i=1;i<=k;i++){
        int result = (i^(i-1));
        while(result!=0){
            if(result%2==1) counter++;
            result/=2;
        }
    }
    cout << counter << endl;
    return 0;
}