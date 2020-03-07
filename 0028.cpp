#include<iostream>
#include<algorithm>

using namespace std;

struct Team{
    string name;
    int score1 =0; // No1
    int score2 =0; // No2
    int score3 =0; // No3
};

bool compareScore1(Team a,Team b){
    return a.score1 < b.score1;
}

bool compareScore2(Team a,Team b){
    return a.score2 < b.score2;
}

bool compareScore3(Team a,Team b){
    return a.score3 < b.score3;
}

int main(){
    Team team[4];
    int s[4][4];
    for(int i=0;i<4;i++) cin >> team[i].name;
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) cin >> s[i][j];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j || j < i) continue;
            if(s[i][j] > s[j][i])       team[i].score1 +=3;
            else if(s[j][i] > s[i][j])  team[j].score1 +=3;
            else if(s[j][i] == s[i][j]){
                team[i].score1++;
                team[j].score1++;
            }
            team[i].score2 += s[i][j]-s[j][i];
            team[j].score2 += s[j][i]-s[i][j];
            team[i].score3 += s[i][j];
            team[j].score3 += s[j][i];
            //cout << i << j << " ";
        }
        //cout << endl;
    }
    /*for(int i=0;i<4;i++){
        cout << team[i].name << " " << team[i].score1 << " " << team[i].score2 << " " << team[i].score3 << endl;
    }

    cout << "DEBUG \n\n";*/
    sort(team,team+4,compareScore1);
    if(team[3].score1==team[2].score1){
        sort(team+2,team+4,compareScore2);
    }
    if(team[2].score1==team[1].score1){
        sort(team+1,team+3,compareScore2);
    }
    if(team[1].score1==team[0].score1){
        sort(team,team+2,compareScore2);
    }
    if(team[3].score2==team[2].score2){
        sort(team+2,team+4,compareScore3);
    }
    if(team[2].score2==team[1].score2){
        sort(team+1,team+3,compareScore3);
    }
    if(team[1].score2==team[0].score2){
        sort(team,team+2,compareScore3);
    }
    for(int i=3;i>=0;i--){
            cout << team[i].name << " " << team[i].score1 << endl;
        }

    return 0;
}
