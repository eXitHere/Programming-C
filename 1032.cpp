#include<iostream>
using namespace std;

int master[9][9]={0};
int user[9][9];

bool check(){
    int numCol[9][9] ={0};
    for(int i=0;i<9;i++){
        int numRow[9]={0};
        int sub[3][3][9]={0};
        for(int j=0;j<9;j++){
            if(master[i][j]!=0 && master[i][j]!=user[i][j]) return false;
            if(numRow[user[i][j]-1]==0){
                numRow[user[i][j]-1]++;
                //cout << "mark : "<<  user[i][j] << endl;
            }else{
                return false;
            }
            if(numCol[j][user[i][j]-1]==0){
                numCol[j][user[i][j]-1]++;
                //cout << j <<" mark " << user[i][j] << endl;
            }
            else{
                //cout << "Do end " << j << " " << user[i][j] << endl;
                return false;
            }
            if(sub[i/3][j/3][user[i][j]-1]==0){
                sub[i/3][j/3][user[i][j]-1]++;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> master[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                cin >> user[j][k];
            }
        }
        if(check()) cout << i+1 << endl;
    }
    cout << "END";
    return 0;
}
