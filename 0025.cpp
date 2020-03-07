#include<iostream>
using namespace std;

int main(){
    string a,b;
    char operator_;
    cin >> a >> operator_ >> b;
    if(operator_ == '*'){
        cout << "1";
        for(int i=0;i<a.length()-1;i++) cout << "0";
        for(int i=0;i<b.length()-1;i++) cout << "0";
    }
    else{
        if(b.length() > a.length()){
            string temp = a;
            a = b;
            b = temp;
        }
        if(a.length() == b.length()){
            cout << "2";
            for(int i=1;i<a.length();i++) cout << "0";
        }
        else{
            cout << "1";
            for(int i=1;i<a.length();i++){
                //cout << (a.length()-i);
                int indexB = a.length()-i-b.length();
                //cout << indexB << endl;
                if(indexB == 0) cout << "1";
                else cout << "0";
            }
        }
    }
    return 0;
}
