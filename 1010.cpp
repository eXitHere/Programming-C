#include<iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

void find(string arr[],int n,int m,string keyword){
    for(int i=0;i<n;i++){
        //cout << arr[i] << endl;
        for(int j=0;j<m;j++){
            if(keyword[0]==arr[i][j]){
                bool notFound = false;
                int len=0;
                for(int k=j;len<keyword.length() && k>=0 ;k--,len++){ // <----
                    if(keyword[len]!=arr[i][k]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "A" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len=0;
                for(int k=j;len<keyword.length() && k < m;k++,len++){ // <----
                    if(keyword[len]!=arr[i][k]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "B" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len=0;
                for(int k=i;len<keyword.length() && k >= 0;k--,len++){ // <----
                    if(keyword[len]!=arr[k][j]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "C" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len=0;
                for(int k=i;len<keyword.length() && k < n;k++,len++){ // <----
                    if(keyword[len]!=arr[k][j]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "D" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len=0;
                for(int k=i,l=j;len<keyword.length() && k >= 0 && l >= 0;k--,l--,len++){ // <----
                    if(keyword[len]!=arr[k][l]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "E" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len=0;
                for(int k=i,l=j;len<keyword.length() && k >= 0 && l < m;k--,l++,len++){ // <----
                    if(keyword[len]!=arr[k][l]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "F" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len = 0;
                for(int k=i,l=j;len<keyword.length() && k < n && l < m;k++,l++,len++){ // <----
                    //cout << keyword[len] << " -- " << arr[k][l] << " : " << k << " " << l << endl;  
                    if(keyword[len]!=arr[k][l]){
                        //cout << endl << " break : " << arr[k][l] << endl;
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "G" << endl;*/ cout << i << " " << j << endl; return; }
                notFound = false; len =0;
                for(int k=i,l=j;len<keyword.length() && k < n && l >= 0;k++,l--,len++){ // <----
                    if(keyword[len]!=arr[k][l]){
                        notFound = true;
                        break;
                    }
                }
                if(!notFound && len == keyword.length()){ /*cout << "H" << endl;*/ cout << i << " " << j << endl; return; }
                //cout << "^: " << i << " " << j << endl;
            }
        }
    }
}

int main(){

    int n,m;
    cin >> n >> m;
    string arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        transform(arr[i].begin(), arr[i].end(), arr[i].begin(),[](unsigned char c){ return std::tolower(c); });
    } 
    string keyword;
    int iKey;
    cin >> iKey;
    for(int i=0;i<iKey;i++){
        cin >> keyword;
        transform(keyword.begin(), keyword.end(), keyword.begin(),[](unsigned char c){ return std::tolower(c); });
        find(arr,n,m,keyword);
    }
    return 0;
}