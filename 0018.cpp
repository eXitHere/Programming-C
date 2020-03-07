#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }

    return true;
}

int main(){
    int i,n,m;
    cin >> n >> m;
    int arr[n+1];
    for(i=2;i<n+1;i++) arr[i] = i;
    for(i=0;i<m;){
        for(int j=2;j<n+1;j++){
            if(arr[j] != -1 && isPrime(arr[j])){
                for(int k=j;k<n+1;k+=j){
                    if(arr[k]!= -1 ){
                        arr[k] = -1;
                        i++;
                        //cout << k << endl;
                    }

                    //cout << i << endl;
                    if(i==m){
                        cout << k << endl;
                        return 0;
                    }

                }
                break;
            }
        }
        //cout << "i : " << i << endl;
    }
    return 0;
}

