#include <bits/stdc++.h>
using namespace std;
int N;
char board[101][101];
// 정상 빨 : 0 초 : 1 파 : 2 -> 빨초 / 파 따로 BFS

bool vis1[101][101] = {false};
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int nx, ny;

void BFS(int i, int j){
    queue<pair<int,int>> Q;
    Q.push({i,j});
    vis1[i][j] = 1;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            nx = cur.first + dx[dir];
            ny = cur.second + dy[dir];
            if(nx <0|| nx>=N || ny<0|| ny>=N) continue;
            if(vis1[nx][ny] == 1) continue;
            vis1[nx][ny] = 1;
            Q.push({nx,ny});
        }
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, idx =0;
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board[i][j];
        }
    }

    int ans_1 = 0, ans_2 = 0;
    int cnt = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(!vis1[i][j]){
                BFS(i,j);
                ans_1++;
            }else{
                cnt++;
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(board[i][j] == 'G') board[i][j] = 'R';
        }
    }
    
    for(int i=0; i<N; i++){
        fill(vis1[i], vis1[i]+N, 0);
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(!vis1[i][j]){
                BFS(i,j);
                ans_2++;
            }
        }
    }

    cout<< ans_1 << " " << ans_2;
}