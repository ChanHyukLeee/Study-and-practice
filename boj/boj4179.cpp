#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#define X first
#define Y second
using namespace std;

string board[1002];
int dist1[1002][1002]; // time
int dist2[1002][1002]; // time
int N,M;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int nx, ny;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    queue<pair<int,int>> Q1; // fire
    queue<pair<int,int>> Q2; // move
    for(int i = 0; i < N; i++){
        fill(dist1[i], dist1[i]+M, -1);
        fill(dist2[i], dist2[i]+M, -1);    
    }
    for(int i=0; i<N; i++){
        cin >> board[i];
        for(int k = 0; k<M; k++){
            if(board[i][k] == 'J'){
                Q2.push({i,k});
                dist2[i][k] = 1; 
            }else if(board[i][k] == 'F'){
                // board[i][k] = 1; //fire -> 안해도 됨
                dist1[i][k] = 1;
                Q1.push({i,k});
            }
        }
    }
    //fire time
    while(!Q1.empty()){
        pair<int,int> cur = Q1.front();
        Q1.pop();
        for(int i=0; i<4; i++){
            nx = cur.first + dx[i];
            ny = cur.second + dy[i];
            if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
            if(board[nx][ny] == '#' || dist1[nx][ny] >=0) continue;
            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            Q1.push({nx,ny});
        }
    }

    while(!Q2.empty()){
        pair<int,int> cur = Q2.front();
        Q2.pop();
        for(int i=0; i<4; i++){
            nx = cur.first + dx[i];
            ny = cur.second + dy[i];
            if(nx<0 || nx>=N || ny<0 || ny>=M){
                cout << dist2[cur.X][cur.Y];
                return 0;
            }
            if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] +1) continue;
            if(board[nx][ny]== '#' || dist2[nx][ny] >= 0) continue;
            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            Q2.push({nx,ny});
        }
    }
    cout<< "IMPOSSIBLE";
}