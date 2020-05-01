#include<iostream>
using namespace std;

int main(){
    int n,m,l,k;
    float c;
    cin >> n >> m >> l >> k >> c;
    int temp,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> temp;
            sum += temp;
        }
    }
    int cost_all = l*k*c + sum;
    int costPerPerson = cost_all/c;
    if(costPerPerson * c == cost_all){
        cout << costPerPerson << endl;
    }
    else{
        cout << costPerPerson+1 << endl;
    }

    return 0;
}
