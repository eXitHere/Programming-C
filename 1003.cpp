#include<iostream>

using namespace std;

bool check[101] = {false};

int recursive(int n,int a,int b,int c){
    if(n>100){
        return 0;
    }
    check[n] = true;
    //cout << n << endl;
    recursive(n+a,a,b,c);
    recursive(n+b,a,b,c);
    recursive(n+c,a,b,c);
}

int main(){
    recursive(0,6,9,20);
    int n;
    bool have = false;
    cin >> n;
    if(n<6){
        cout << "no" << endl;
        return 0;
        //continue;
    }
    for(int i=1;i<=n;i++){
        if(check[i]){
            cout << i << endl;
        }
    }



    return 0;
}
