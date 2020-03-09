#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    bool check[n*n+1]={false};
    vector<int> result;
    int arr[n][n],input;
    int row[n]={0},col[n]={0},A1=0,A2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> input;
            if(input<=n*n && !check[input]){
                check[input] = true;
                arr[i][j] = input;
            }
            else{
                cout << "No";
                return 0;
            }
            if(i==j){
                A1+=arr[i][j];
            }
            if(n-i == n-j){
                A2+=arr[i][j];
            }
            row[i] += arr[i][j];
            col[j] += arr[i][j];
        }
    }
    //cout << A1 << endl;
    //cout << A2 << endl;
    for(int i=0;i<n;i++){
        //cout << row[i] << endl;
        //sumRow+=row[i];
        result.push_back(row[i]);
    }
    for(int i=0;i<n;i++){
        //cout << col[i] << endl;
        //sumCol+=col[i];
        result.push_back(row[i]);
    }
    result.push_back(A1);
    result.push_back(A2);
    for(int i=1;i<result.size();i++){
        if(result[i]!=result[i-1]){
            cout <<"No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
