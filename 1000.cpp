#include<iostream>
#include<string>
using namespace std;

bool check(string a,string b){
    int temp=0;
    for(int i=0;i<a.length();i++){
        if(a[i] != b[i]) temp++;
        if(temp > 2) return false;
    }
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    string prev="",now;
    for(int i=0;i<m;i++){
        cin >> now;
        if(i==0){
            prev = now;
            continue;
        }
        if(check(now,prev)){
            prev = now;
        }
        else{
            break;
        }
    }
    cout << prev;
    return 0;
}
