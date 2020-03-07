#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int input;
    vector<int> arr;
    for(int i=0;i<4;i++){
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(),arr.end());
    int Max = -1;
    for(int i=1;i<3;i++){
        if(arr[i] > Max) Max = arr[i];
    }

    cout << Max * arr[0] << endl;
    return 0;
}

