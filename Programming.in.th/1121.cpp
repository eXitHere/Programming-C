#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<char> symbol;
    string input;
    for(int i=0;i<n;i++){
        cin >> input;
        for(int j=0;j<input.length();j++){
            if(symbol.size()>0){
                if(input[j]==')' && symbol.top() == '('){
                    symbol.pop();
                }
                else if(input[j]==']' && symbol.top() == '['){
                    symbol.pop();
                }
                else if(input[j]=='}' && symbol.top() == '{'){
                    symbol.pop();
                }
                else{
                    symbol.push(input[j]);
                }
            }
            else{
                symbol.push(input[j]);
            }
        }
        if(symbol.size()==0){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
            while(!symbol.empty()) symbol.pop();
        }
    }
    return 0;
}