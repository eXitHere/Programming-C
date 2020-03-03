#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<string> listWord;
    int n;
    string input;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        listWord.push_back(input);
    }
    sort(listWord.begin(),listWord.end());
    cout << listWord[0] << endl;
    for(int i=1;i<n;i++){
        if(listWord[i]!=listWord[i-1]) cout << listWord[i] << endl;
    }
    return 0;
}
