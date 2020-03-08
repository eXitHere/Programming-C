#include<iostream>
#include<queue>
using namespace std;

void print_queue(priority_queue<int>& q){
    printf("%d\n",q.top());
    //cout << q.top() << endl;
    q.pop();
}

int main(){
    int n;
    //cin >> n;
    scanf("%d",&n);
    char key;
    int price;
    priority_queue<int> slot;
    for(int i=0;i<n;i++){
        scanf(" %c",&key);
        //cin >> key;
        if(key == 'P'){
            scanf("%d",&price);
            //cin >> price;
            slot.push(price);
        }
        else if(key == 'Q'){
            if(slot.size()==0) printf("%d\n",-1);
                //cout << -1 << endl;
            else print_queue(slot);
        }
    }

    return 0;
}
