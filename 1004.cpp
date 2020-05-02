#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<pair<int,int>> dataAll;

int findRoom(int ID){
    for(int i=0;i<dataAll.size();i++){
        if(dataAll[i].second == ID){
            return dataAll[i].first;
        }
    }
    return -1;
}

int main(){
    int nRoom,nPlayer;
    int _room,_id;
    char key;
    int studentID;
    cin >> nRoom >> nPlayer;
    queue<pair<int,int>> row;
    vector<int> out;
    for(int i=0;i<nPlayer;i++){
        cin >> _room >> _id;
        dataAll.push_back(make_pair(_room,_id));
    }
    do{
        cin >> key;
        if(key=='E'){ // summon
            cin >> studentID;
            bool isDuplicated = false;
            for(int i=0;i<out.size();i++){
                if(studentID==out[i]){
                    isDuplicated = true;
                    //cout << "Do" << endl;
                    break;
                }
            }
            if(isDuplicated) continue;
            int _r = findRoom(studentID)-1;
            int __r = -1;
            queue<pair<int,int>> _row;
            if(row.empty()){
                //cout << "empty!" << endl;
                row.push(make_pair(_r,studentID));
                continue;
            }
            bool isInsert = false;
            while(!row.empty()){
                pair<int,int> data = row.front();
                row.pop();
                if(data.first == _r && __r == -1 && !isInsert){ // found room
                    __r = _r;
                }
                else if(__r!=-1 && data.first!=__r && !isInsert){
                    _row.push(make_pair(_r,studentID));
                    isInsert = true;
                }
                _row.push(data);
            }
            if(!isInsert) _row.push(make_pair(_r,studentID));
            //cout << "Member in row: ";
            while(!_row.empty()){
                pair<int,int> data = _row.front();
                _row.pop();
                //cout << data.second << " ";
                row.push(data);
            }
        }
        else if(key=='D'){
            if(row.empty()){
                //cout << "empty" << endl;
                continue;
                /*for(int i=0;i<out.size();i++){
                    cout << out[i] << endl;
                }
                cout << 0 << endl;
                return 0;*/
            }
            out.push_back(row.front().second);
            row.pop();
        }
    }while(key!='X');
    for(int i=0;i<out.size();i++){
        cout << out[i] << endl;
    }
    cout << 0 << endl;
    return 0;
}