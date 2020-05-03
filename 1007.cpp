#include<iostream>

using namespace std;

int main(){
    int n;
    do{
        cin >> n;
        if(n!=-1){
            int m=1,w=1+1,s=1;
            //!   1  1+1+1   3
            n--;
            while(n--){
                int _s = s;
                s=w;
                w+=1+_s;
            }
            cout << w << " " << m+w+s << endl;
        }
        else{
            break;
        }
    }while(true);
    return 0;
}