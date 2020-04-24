#include<iostream>
using namespace std;
int main(){
    int n,m,index=0;
    cin >> n >> m;
    int arr[n],dice,player[m];
    for(int i=0;i<m;i++) player[i] = 0; // clear
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<n;i++){
        cin >> dice;
        while(dice){
            if(arr[index++%n]){
                dice--;
                //cout << " dice :: " << dice  << endl;
            }
        }
        while(!arr[index%n]) index++;
        //cout << "active : " << arr[index%n] << endl;
         player[i%m] += arr[index%n];
        arr[index%n] = 0;
        //cout << "end" << " i " << i << " n " << n << endl;
    }
    for(int i=0;i<m;i++) cout << player[i] << endl;
    return 0;
}