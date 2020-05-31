#include<iostream>
using namespace std;
int tile[20][20] = {0};
int counter = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    
    cin >> n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> tile[i][j];
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(tile[i][j] && tile[i][j]   == tile[i][j-1]   &&  tile[i][j]  == tile[i+1][j]
                          && tile[i][j]   != tile[i-1][j]   && tile[i][j]   != tile[i][j+1]
                          && tile[i][j-1] != tile[i-1][j-1] && tile[i][j-1] != tile[i][j-2]   && tile[i][j-1] != tile[i+1][j-1]    // L
                          && tile[i+1][j] != tile[i+1][j-1] && tile[i+1][j] != tile[i+1][j+1] && tile[i+1][j] != tile[i+2][j]) {   // B - | down
                tile[i][j]   = 0;
                tile[i][j-1] = 0;
                tile[i+1][j] = 0;
                counter ++;
            }
            else if(tile[i][j] && tile[i][j]     == tile[i][j-1]   && tile[i][j]   == tile[i-1][j]
                               && tile[i][j]     != tile[i+1][j]   && tile[i][j]   != tile[i][j+1]
                               && tile[i][j-1]   != tile[i-1][j-1] && tile[i][j-1] != tile[i][j-2]   && tile[i][j-1] != tile[i+1][j-1] // L
                               && tile[i-1][j]   != tile[i-1][j-1] && tile[i-1][j] != tile[i-1][j+1] && tile[i-1][j] != tile[i-2][j]) {  // - | up
                tile[i][j]   = 0;
                tile[i][j-1] = 0;
                tile[i-1][j] = 0;
                counter ++;
            }
            else if(tile[i][j] && tile[i][j]     == tile[i][j+1]   && tile[i][j]   == tile[i+1][j]
                               && tile[i][j]     != tile[i-1][j]   && tile[i][j]   != tile[i][j-1]
                               && tile[i][j+1]   != tile[i-1][j+1] && tile[i][j+1] != tile[i][j+2]   && tile[i][j+1] != tile[i+1][j+1] // R
                               && tile[i+1][j]   != tile[i+1][j-1] && tile[i+1][j] != tile[i+1][j+1] && tile[i+1][j] != tile[i+2][j]) {  //  |- Down
                tile[i][j]   = 0;
                tile[i][j+1] = 0;
                tile[i+1][j] = 0;
                counter ++;
            }
            else if(tile[i][j] && tile[i][j] == tile[i][j+1] && tile[i][j] == tile[i-1][j]
                               && tile[i][j]     != tile[i+1][j]   && tile[i][j]   != tile[i][j-1]
                               && tile[i][j+1]   != tile[i-1][j+1] && tile[i][j+1] != tile[i][j+2]   && tile[i][j+1] != tile[i+1][j+1] // R
                               && tile[i-1][j]   != tile[i-1][j-1] && tile[i-1][j] != tile[i-1][j+1] && tile[i-1][j] != tile[i-2][j]) {  //  |- up
                tile[i][j]   = 0;
                tile[i][j+1] = 0;
                tile[i-1][j] = 0;
                counter ++;
            }
        }
    }/*
    cout << endl << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout << tile[i][j] << " ";
        cout << endl;
    }*/
    cout << counter << endl;

    return 0;
}