#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int block[m];
    int num[n];
    for(int i=0;i<n;i++){
        num[i] = i+1;
    }
    for(int i=0;i<m;i++){
        cin >> block[i];
    }
    do{
        bool b =  false;
        for(int i=0;i<m;i++){
            if(num[0]==block[i]){
                b = true;
                break;
            }
        }
        if(b) continue;
        for(int i=0;i<n;i++){
            cout << num[i] << " ";
        }
        cout << endl;
    }while(next_permutation(num,num+n));
    return 0;
}
