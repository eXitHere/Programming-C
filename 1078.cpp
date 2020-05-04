#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    unsigned long long sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0,j=n-1;i<n/2;i++,j--){
        sum+= abs(arr[i]-arr[j]);
    }
    cout << sum << endl;
    return 0;
}