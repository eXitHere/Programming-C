#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string arr[n];
    int positionDown[m];
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<m;i++) cin >> positionDown[i];

    for(int i=0;i<m;i++){
        if(arr[0][i] == 'O') continue;
        for(int j=0;j<n;j++){
            if(j==n-1 || arr[j+1][i] == '#' || arr[j+1][i] == 'O'){
                for(int k=0;k<positionDown[i];k++){
                    if(j-k<0) break;
                    arr[j-k][i] = '#';
                }
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
