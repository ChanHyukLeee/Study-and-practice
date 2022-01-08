#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#define X first
#define Y second
using namespace std;

int board[1002][1002];
int dist[1002][1002]; // distance
int N,M;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int nx, ny;
int st_x[1002], st_y[1002];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N;
    queue<pair<int,int>> Q;
    
    for(int i=0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                Q.push({i,j});
            }else if(board[i][j]==0){
                dist[i][j]=-1;
            }
        }
    }

    while(!Q.empty()){
        pair<int,int> cur = Q.front(); 
        Q.pop();
        for(int i=0; i<4; i++){
            nx = cur.first + dx[i];
            ny = cur.second + dy[i];
            if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
            if(dist[nx][ny] >=0) continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx,ny});
        }
    }
    int ans = 0;
    for(int i=0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(dist[i][j] == -1){
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
}