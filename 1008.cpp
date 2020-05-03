#include<iostream>

using namespace std;


struct Building{
    int L=0;
    int H=0;
    int R=0;
};

int main(){
    int n;
    cin >> n;
    int area[257]={0};
    Building b;
    for(int i=0;i<n;i++){
        cin >> b.L >> b.H >> b.R;
        for(;b.L<b.R;b.L++){
            area[b.L] = max(area[b.L],b.H);
        }

    }
    for(int i=1;i<256;i++){
        if(area[i-1]!=area[i]){
            cout << i << " " << area[i] << " ";
        }
    }
    return 0;
}