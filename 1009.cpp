#include<iostream>
#include<cmath>
using namespace std;

char patt[][3][4]={
    {" _ ","| |","|_|"},    //0
    {"   ","  |","  |"},  //1
    {" _ "," _|","|_ "},   //2
    {" _ "," _|"," _|"},   //3
    {"   ","|_|","  |"},   //4
    {" _ ","|_ "," _|"},   //5
    {" _ ","|_ ","|_|"},   //6
    {" _ ","  |","  |"},   //7
    {" _ ","|_|","|_|"},   //8
    {" _ ","|_|"," _|"}    //9
};

void printC(){
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<3;k++){
                cout << patt[j][i][k] <<" ";
            }
        }
        cout << endl;
    }
}

int getNumber(char l1[4],char l2[4],char l3[4]){
    int i=0;
    int countTrue =0;
    string p[3];
    p[0] = string(l1);
    p[1] = string(l2);
    p[2] = string(l3);
    //cout << "SIZE : " << p[0].length() << " " << p[1].length() << " " << p[2].length() << endl;
    if(p[0].length()==2) p[0].push_back(' ');
    if(p[1].length()==2) p[1].push_back(' ');
    if(p[2].length()==2) p[2].push_back(' ');
    //cout << "SIZE : " << p[0].length() << " " << p[1].length() << " " << p[2].length() << endl;
    //cout << "INGETNUM" << endl;
    //cout << p[0] << endl << p[1] << endl << p[2] << endl;
     //cout << p[0] << endl;
    for(i=0;i<10;i++){
        //cout << "Case " << i << endl;
        countTrue =0;
        for(int k=0;k<3;k++){
            //cout << p[k];
            //cout << p[k] << " and " << patt[i][k] << endl;
            //cout << p[k] << " AND " << (patt[i][k]) << " " << k << endl;
            if(p[k].compare(patt[i][k])!=0){
                countTrue=0;
                break;
            }
            countTrue++;
        }
        if(countTrue==3){
            //cout<<"VALUE : " << i << endl;
            return i;
        }
    }
    //cout <<"FALSE " << i << endl;
    return -1;
}

long POW(int n,int m){
    int t=n;
    while(--m){
        n*=t;
    }
    return n;
}

unsigned long long getNumberString(string n[3],int SIZE){
    //cout << n[0] << endl;
    //cout << n[1] << endl;
    //cout << n[2] << endl;
    unsigned long long temp =0;
    if(n[0].length()==0){
        for(int i=0;i<SIZE*4;i++){
            n[0].insert(i,1,' ');
        }
    }
    //cout << SIZE << endl;
    //cout << n[0].length()/4 << endl;
    char split[3][SIZE][4];
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<4;j++){
            if(j==3){
                split[0][i][j] ='\0';
                split[1][i][j] ='\0';
                split[2][i][j] ='\0';
            }
            else{
                split[0][i][j] =n[0][i*4+j];
                split[1][i][j] =n[1][i*4+j];
                split[2][i][j] =n[2][i*4+j];
            }
                
        }
    }
    /*for(int j=0;j<SIZE;j++){
        cout << split[0][j]<< " " << endl;
        cout << split[1][j]<< " " << endl;
        cout << split[2][j]<< " " << endl;
    }*/
    //cout << "TEMP : " << pow(10,4);
    unsigned long p = POW(10,SIZE-1);
    //cout << SIZE << " SIZE" << endl;
    //cout <<"P - " << p << endl;
    for(int i=0;i<SIZE;i++){
        //cout << i << " --- " << endl;
        temp += (getNumber(split[0][i],split[1][i],split[2][i]))*p;
        //cout << (getNumber(split[0][i],split[1][i],split[2][i]))*p << endl;
        p/=10;
    }
    //return temp;
    //cout << temp << endl;

    return temp;
}

int main(){
    //printC();
    //string t[3]={"                ","  | |_|   | |_| ","  |   |   |   |"};
    //getNumberString(t);
    //char t[3][4]={" _ ","| |","|_|"};
    //getNumber(t);
    int n,m,num1=0,num2=0;
    string charInLine1[3],charInLine2[3];
    char t;
    scanf("%d %d",&n,&m);
    getline(cin,charInLine1[0]);
    //cout << "EIEI" << endl;
    for(int i=0;i<3;i++){
        getline(cin,charInLine1[i]);
        //cout << i << endl;
    }
    for(int i=0;i<3;i++){
        getline(cin,charInLine2[i]);
        //cout << i << endl;
    }
/*
    for(int i=0;i<3;i++){
        cout << charInLine1[i] << endl;
    }

    for(int i=0;i<3;i++){
        cout << charInLine2[i] << endl;
    }*/
    cout << getNumberString(charInLine1,n)+getNumberString(charInLine2,m);

    return 0;

}


/*

4 2
.
  | |_|   | |_|
  |   |   |   |

|_|   |
  |   |


*/