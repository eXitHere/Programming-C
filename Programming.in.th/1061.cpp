#include<iostream>

using namespace std;

int _max = 0;

void recur(int **p,int prev,int x,int y){
    if(p[x][y]==100 || p[x][y]<=prev || p[x][y]==-6){
        return;
    } 
    //cout << p[x][y] << " from " << prev << " " << " "<< x << " " << y << endl;
    if(p[x][y]>_max) _max=p[x][y];
    int pr = p[x][y];
    p[x][y] = -6;
    recur(p,pr,x-1,y);
    recur(p,pr,x+1,y);
    recur(p,pr,x,y-1);
    recur(p,pr,x,y+1);
}

int main(){
    int n,posX,posY;
    cin >> n;
    cin >> posY >> posX;
    int **arr = new int *[n+2];
    for(int i=0;i<n+2;i++){
        arr[i] = new int [n+2]; 
    }
    for(int i=0;i<n+2;i++){
        arr[0][i]=100;
        arr[n+1][i]=100;
        arr[i][0]=100;
        arr[i][n+1]=100;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i+1][j+1];
        }
    }
    /*
    for(int i=0;i<n+2;i++){
        for(int j=0;j<n+2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "start at : " << arr[posX][posY] << endl;*/
    recur(arr,-6,posX,posY);
    cout << _max << endl;
    return 0;
}