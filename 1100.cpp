#include<iostream>

using namespace std;

int main(){
    //cout << fac(5);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long count[1000]={0},input;
    long long counter=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        count[input]++;
    }
    for(int i=0;i<1000;i++){
        if(count[i]>1){
            //cout << "DO : " << ((count[i])*(count[i]-1))/2 << endl;
            counter+=((count[i])*(count[i]-1))/2;
        }
        for(int j=i+1;j<1000;j++){
            if((i%10 == j%10 || (i%100)/10 == (j%100)/10 || i/100 == j/100 ) && count[i] && count[j]){
                   //cout << i << " and " << j << " : " << count[i] << " * " << count[j] << endl;
                   counter+=count[i]*count[j];
               }
        }
    }
    cout << counter << endl;;
    return 0;
}

