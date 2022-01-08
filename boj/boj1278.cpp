#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

string board[102];
int vis[102][102]; // distance
int N,M;
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int nx, ny;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    // 공백없는 행렬
    for(int i=0; i<N; i++){
        cin >> board[i];
    }
    for(int i=0; i<N; i++) fill(vis[i], vis[i]+M, -1);
    vis[0][0] = 0;
    queue<pair<int,int>> Q;
    Q.push({0,0});
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); 
        Q.pop();
        for(int i=0; i<4; i++){
            nx = cur.first + dx[i];
            ny = cur.second + dy[i];
            if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
            if(vis[nx][ny] >=0 || board[nx][ny] != '1') continue;
            // string 이니깐 1대신 '1' 사용해야함!
            vis[nx][ny] = vis[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }
    }
    cout<< vis[N-1][M-1] +1;
}