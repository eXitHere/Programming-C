#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    int Long =0,Max=0,lastIndex;
    //if(b.length()>a.length()) swap(a,b);
    int arr[a.length()+1][b.length()+1];
    int len = 0;
    for(int i=0;i<=a.length();i++){
        for(int j=0;j<=b.length();j++){
            if(i==0 || j==0){
                arr[i][j]=0;
            }
            else if(a[i-1] ==b[j-1]){
                arr[i][j] = arr[i-1][j-1]+1;
                if(arr[i][j]>len){
                    len = arr[i][j];
                    lastIndex = i;
                }
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    lastIndex--;
    //cout << lastIndex << " " << len << endl;
    //cout << endl << lastIndex << " " << Max << endl;
    for(int i=lastIndex-len+1;i<=lastIndex;i++){
        //cout << i << endl;
        cout << a[i];
    }
    return 0;
}
