#include<iostream>
#include<string>

using namespace std;

void Forward(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = B;
    *f = T;
    *b = D;
    *d = F;
}

void Backward(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = F;
    *f = D;
    *b = T;
    *d = B;
}

void Left(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = R;
    *l = T;
    *r = D;
    *d = L;
}

void Right(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *t = L;
    *l = D;
    *r = T;
    *d = R;
}

void Clockwise(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *f = R;
    *l = F;
    *b = L;
    *r = B;
}

void counterClockwise(int *t,int *f,int *l,int *b,int *r,int *d){
    int T = *t,F = *f, L = *l, B = *b ,R = *r,D = *d;
    *f = L;
    *l = B;
    *b = R;
    *r = F;
}

int main(){
    int n;
    string input;
    char table[][6] = {{5,1,3,6,4,2}, // * F
                      {2,6,3,1,4,5},  // * B
                      {4,2,1,5,6,3},  // * L
                      {3,2,6,5,1,4},  // * R
                      {1,4,2,3,5,6},  // * C
                      {1,3,5,4,2,6}}; // * D
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        int start[] = {1,2,3,5,4,6};
        for(int j=0;j<input.length();j++){
            if(input[j]=='F')      Forward(&start[0],&start[1],&start[2],&start[3],&start[4],&start[5]);
            else if(input[j]=='B') Backward(&start[0],&start[1],&start[2],&start[3],&start[4],&start[5]);
            else if(input[j]=='L') Left(&start[0],&start[1],&start[2],&start[3],&start[4],&start[5]);
            else if(input[j]=='R') Right(&start[0],&start[1],&start[2],&start[3],&start[4],&start[5]);
            else if(input[j]=='C') Clockwise(&start[0],&start[1],&start[2],&start[3],&start[4],&start[5]);
            else if(input[j]=='D') counterClockwise(&start[0],&start[1],&start[2],&start[3],&start[4],&start[5]);
        }
        cout << start[1] << " ";
    }

    return 0;
}