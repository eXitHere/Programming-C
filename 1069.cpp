#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<char> arr;
    char input;
    for(int i=0;i<n;i++){
        cin >> input;
        if(arr.empty()){
            arr.push(input);
        }
        else{
            if(arr.top()==input){
                //cout << arr[lastIndex] << " " << input << endl;
                arr.pop();
            }
            else{
                //cout << "add " << input << " index: " << lastIndex << endl;
                arr.push(input);
            }
        }
    }
    if(!arr.empty()){
        cout << arr.size() << endl;
        while(!arr.empty()){
            cout << arr.top();
            arr.pop();
        }
    }
    else{
        cout << 0 << endl << "empty" << endl;
    }
    
    return 0;
}