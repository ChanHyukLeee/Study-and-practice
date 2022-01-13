#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#define X first
#define Y second

using namespace std;
int n;
int board[102][102];
bool vis[102][102];
int dist[102][102];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void findisland(){

}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }
    
    queue<pair<int,int>> Q;
    int cnt = 0;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(board[i][j]==0 || vis[i][j]) continue;
        cnt++;
        Q.push({i,j});
        vis[i][j] = 1;
        board[i][j]= cnt;
        while(!Q.empty()){
          pair<int,int> cur = Q.front();
          Q.pop();
          for(int dir=0; dir<4; dir++){
            int nx = dx[dir] + cur.X;
            int ny = dy[dir] + cur.Y;
            if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
            if(vis[nx][ny]|| board[nx][ny]==0) continue;
            Q.push({nx,ny});
            vis[nx][ny] = 1;
            board[nx][ny] = cnt;
          }
        }     
      }  
    }
    
    for(int i=0; i<n; i++)
      fill(dist[i], dist[i]+n, -1);

    int ans = 1000000;

    queue<pair<int,int>> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(board[i][j] == 0) continue;
          q.push({i,j});
          dist[i][j] = 0;
          int temp = board[i][j];
          bool flag = false;
          while(!q.empty() && !flag){
            auto cur = q.front(); q.pop();
            for(int dir = 0; dir<4; dir++){
              int nx = dx[dir] + cur.X;
              int ny = dy[dir] + cur.Y;
              if(nx<0|| nx>=n || ny< 0|| ny>=n) continue;
              if(dist[nx][ny] >=0) continue;
              if(board[nx][ny] == 0){
                dist[nx][ny] = dist[cur.X][cur.Y] +1;
                q.push({nx,ny});
              }else if(board[nx][ny] == temp){ // 같다면
                dist[nx][ny] = 0;
                q.push({nx,ny});
              }else{ // temp와 다르다면
                ans = min(ans, dist[cur.X][cur.Y]);
                flag = true;
                while(!q.empty()) q.pop();
                break;
              }
            }
          }
          for(int i =0; i<n; i++){
            fill(dist[i], dist[i]+n, -1);
          }
      }
    }
    cout << ans;

}

// 다른 풀이 https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x09/solutions/2146_1.cpp
// 매번 dist를 초기화하는 과정이 필요한데 이를 큐에 좌표와  거리를 같이 넣는 방식으로 처리 

// vector 하나를 만들어서 그것을 board[i]에 저장하는 대신에 vector에 저장
// 그래서 vector를 돌면서 계산

// 혹은 모든 육지에서 bfs 돌리기
// 육지를 모두 queue에 push 한담에 queue를 돌려서 바다면 같은 육지로 만들고 distance를 1증가 시킴
// 그리고 인접한 곳이 다른 섬이 되면 그때 ans를 min 함수를 이용해서 구한다. min(ans,dist[nx][ny]+dist[cur.X][cur.Y])