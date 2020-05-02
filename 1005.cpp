#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int index = -1;
    int length = 0;
    int max = 0;
    int sum;
    // sub sebArray
    for(int i=0;i<n;i++){ // starting point
        sum = 0;
        for(int j=i;j<n;j++){ //ending point
            sum += arr[j];
            //cout << endl;
            if(sum>max){
                max = sum;
                index = i;
                length = j;
            }
        }
    }
    if(max==0){
        cout << "Empty sequence";
        return 0;
    }
    for(int i=index;i<=length;i++){
        cout << arr[i] << " ";
    }
    cout << endl << max << endl;
    return 0;
}