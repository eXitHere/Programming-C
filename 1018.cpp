#include<iostream>
using namespace std;

void switchDirection(string command,int* direc){
    if(!command.compare("LT")){
        //cout << "DO" << endl;
        *direc=*direc==0?3:*direc-1;
    }else if(!command.compare("RT")){
        *direc=(*direc+1)%4;
    }else if(!command.compare("BW")){
        *direc=(*direc+2)%4;
    }
    //cout << endl << "new : " << *direc << endl;
}

bool canMove(int *direc,int* x,int* y,int distance){
    switch (*direc)
    {
    case 0: 
        //cout << "Do case 0 " << endl;
        if(*y+distance >= 50000){
            return false;
        }
        else{
            *y+=distance;
        }
        break; 
    case 1:
        //cout << "Do case 1 " << endl;
        if(*x+distance >= 50000){
            return false;
        }
        else{
            *x+=distance;
        }
        break;
    case 2:
        //cout << "Do case 2 " << endl;
        if(*y-distance <= -50000){
            return false;
        }
        else{
            *y-=distance;
        }
        break;
    case 3:
        //cout << "Do case 3 " << endl;
        if(*x-distance <= -50000){
            return false;
        }
        else{
            *x-=distance;
        }
    }
    //cout << "xy : " << *x << " " << *y << endl;
    return true;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(NULL);
    int n,posX=0,posY=0,direction=1;
    string directionAll[]={"N","E","S","W"};
    cin >> n;
    string command;
    int distance;
    for(int i=0;i<n;i++){
        cin >> command >> distance;
        switchDirection(command,&direction);
        //cout << "new direction : " << directionAll[direction] << endl;
        if(!canMove(&direction,&posX,&posY,distance)){
            cout << "DEAD" << endl;
            return 0;
        }
    }
    cout << posX << " " << posY << endl << directionAll[direction];
    return 0;
}