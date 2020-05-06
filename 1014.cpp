#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w,h,n;
    cin >> w >> h >> n;
    int count50 = 0;
    int count100 = 0;
    int areaAll[5000]={0};
    int xW,xA;
    for(int i=0;i<n;i++){
        cin >> xW >> xA;
        for(int j=xW;j<xW+xA;j++){
            areaAll[j]++;
        }
        //cout << endl;
    }
    for(int i=0;i<w;i++){
        if(areaAll[i]==0){
            count100++;
        }else if(areaAll[i]==1){
            count50++;
        }
    }
    cout <<  count100*h <<" " << count50*h << endl;
    return 0;
}