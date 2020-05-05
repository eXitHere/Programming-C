#include<iostream>
#include<vector>
using namespace std;

int main(){

    char keyPad[3][3][5]= {{"-","ABC","DEF"},{"GHI","JKL","MNO"},{"PQRS","TUV","WXYZ"}};
    int sizePad[3][3] = {{1,3,3},{3,3,3},{4,3,4}};
    vector<char> output;
    int nowX,nowY,n,startAt,count,moveX,moveY;
    cin >> n;
    cin >> startAt >> count;
    nowX = (startAt-1)/3;
    nowY = (startAt-1)%3;
    if(startAt!=1){ // >0
        //cout << "inpad : " << keyPad[nowX][nowY] << " " << (count-1)%sizePad[nowX][nowY] <<  endl;
        output.push_back(keyPad[nowX][nowY][(count-1)%sizePad[nowX][nowY]]);
    }
    //cout << "START : " << nowX << " " << nowY << endl;
    while(--n){
        cin >> moveY >> moveX >> count;
        nowX += moveX;
        nowY += moveY;
        //cout << "nowPos : " << nowX << " " << nowY << endl;
        if(nowX || nowY){
            output.push_back(keyPad[nowX][nowY][(count-1)%sizePad[nowX][nowY]]);
        }
        else{
            //cout << "del" << endl;
            while(count-- && !output.empty()) {output.pop_back();}
        }
    }
    if(output.empty()) cout << "null" << endl;
    else{
        for(int i=0;i<output.size();i++){
            cout << output[i];
        }
    }
    return 0;
}